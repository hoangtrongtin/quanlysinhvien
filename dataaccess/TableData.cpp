#include "TableData.h"

TableData::TableData(TableUnit* ptU){
    tableUnit = ptU;
    Data.resize(0);
}
vector<TableUnit*> TableData::GetData(){
    return Data;
}
TableUnit* TableData::GetTableUnitPtr(){
    TableUnit* ptU = tableUnit->ClonePtr();
    return ptU;
}
void TableData::SetData(vector<TableUnit*> ptD){
    Data = ptD;
}
int TableData::Getsize(){
    return Data.size();
}
void TableData::Resize(int n){
    Data.resize(n);
}
void TableData::PushBack(TableUnit* ptU){
    Data.push_back(ptU);
}
void TableData::Edit(TableUnit* ptU, int i){
    Data[i] = ptU;
}
void TableData::Delete(int i){
    Data.erase(Data.begin()+i);
}
string TableData::ToString(){
    string s = "";
    for(auto tU: Data){
        s = s + tU->ToString();
    }
    s += "====================================================\n";
    return s;
}
