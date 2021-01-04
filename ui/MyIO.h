#ifndef ui_MyIO_H_
#define ui_MyIO_H_
#include "../businessobject/TableUnit.h"
#include "../dataaccess/TableData.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

class MyIO{
private:
public:
    MyIO();
    void DataIn(TableUnit*);
    void DataOut(TableUnit*);
    void PrintData(TableData*);
    void AddData(TableData*);
    void EditData(TableData*);
    void DeleteData(TableData*);

};

#endif