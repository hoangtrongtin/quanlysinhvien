#ifndef dataaccess_TableData_H_
#define dataaccess_TableData_H_
#include "../businessobject/TableUnit.h"
#include<vector>
#include<string>
#include<map>

using namespace std;

class TableData{
private:
    vector<TableUnit*> Data;
    TableUnit* tableUnit;
public:
    TableData(TableUnit*);
    vector<TableUnit*> GetData();
    TableUnit* GetTableUnitPtr();
    void SetData(vector<TableUnit*>);
    int Getsize();
    void Resize(int);
    void PushBack(TableUnit*);
    void Edit(TableUnit*, int);
    void Delete(int);
    string ToString();
};
#endif