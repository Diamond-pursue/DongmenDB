//
// Created by sam on 2018/11/15.
//

#ifndef DONGMENDB_SELECT_H
#define DONGMENDB_SELECT_H

#include <physicalplan/Scan.h>

/*选择操作实现*/
class Select : public Scan {
    public:
    Expression *cond;
    Scan* scan;

    Select(Scan* scan) : scan(scan){};

    int beforeFirst();

    int next();

    int close();

    variant* getValueByIndex(int index);

    int getIntByIndex(int index);

    string getStringByIndex(int index);

    int getInt(string tableName, string fieldName);

    variant* getValue(string fieldName);

    string getString(string tableName, string fieldName);

    int hasField(string tableName, string fieldName);

    FieldInfo *getField(string tableName, string fieldName);

    vector<char*> getFieldsName(string tableName);

    int setInt(string tableName, string fieldName, int value);

    int setString(string tableName, string fieldName, string value);

    int deleteRecord();

    int insertRecord();

    int getRID(RecordID *recordID);

    int moveTo(RecordID *recordID);
};

#endif //DONGMENDB_SELECT_H
