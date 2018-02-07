//
// Created by Sam on 2018/2/7.
//

#ifndef DONGMENDB_PHYSICAL_SCAN_JOIN_NEST_LOOP_H
#define DONGMENDB_PHYSICAL_SCAN_JOIN_NEST_LOOP_H

#include "expression.h"
#include "physicalscan.h"

typedef struct physical_scan_ physical_scan;
typedef struct physical_scan_join_nest_loop_{
    physical_scan *scan1, *scan2;
    Expression *cond;

}physical_scan_join_nest_loop;


physical_scan *physical_scan_join_nest_loop_create(physical_scan *scan1, physical_scan *scan2);

void physical_scan_join_nest_loop_init_scan(physical_scan *scan);

int physical_scan_join_nest_loop_before_first(physical_scan *tableScan);

int physical_scan_join_nest_loop_next(physical_scan *tableScan);

int physical_scan_join_nest_loop_close(physical_scan *tableScan);

int physical_scan_join_nest_loop_get_int(physical_scan *tableScan, char *fieldName);

int physical_scan_join_nest_loop_get_string(physical_scan *tableScan, char *fieldName, char *value);

int physical_scan_join_nest_loop_has_field(physical_scan *tableScan, char *fieldName);

int physical_scan_join_nest_loop_set_int(physical_scan *tableScan, char *fieldName, int value);

int physical_scan_join_nest_loop_set_string(physical_scan *tableScan, char *fieldName, char *value);

int physical_scan_join_nest_loop_delete(physical_scan *tableScan);

int physical_scan_join_nest_loop_insert(physical_scan *tableScan);

int physical_scan_join_nest_loop_get_rid(physical_scan *tableScan, record_id *recordId);

int physical_scan_join_nest_loop_moveto_rid(physical_scan *tableScan, record_id *recordId);
#endif //DONGMENDB_PHYSICAL_SCAN_JOIN_NEST_LOOP_H
