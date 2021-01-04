#include "MyIO.h"

MyIO::MyIO(){}
void MyIO::DataIn(TableUnit* ptU){
    map<string, string> mapMember = ptU->GetMapMember();
    for(auto it = mapMember.begin(); it != mapMember.end(); it++){
        cout << "Enter value of " + it->first + ": ";
        string value = ""; getline (cin, value);
        ptU->SetMemberValue(it->first, value);
        //getline(cin, it->second);
        //ptU->FromMapMember();
    }
}
void MyIO::DataOut(TableUnit* ptU){
    cout << ptU->ToString();
}
void MyIO::PrintData(TableData* ptD){
    cout << ptD->ToString();
}
void MyIO::AddData(TableData* ptD){
    TableUnit* unit = ptD->GetTableUnitPtr();
    DataIn(unit);
    DataOut(unit);
    ptD->PushBack(unit);
    PrintData(ptD);
}
void MyIO::EditData(TableData*){

}
void MyIO::DeleteData(TableData*){

}