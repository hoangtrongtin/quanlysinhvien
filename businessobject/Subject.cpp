#include"Subject.h"

Subject::Subject(){
    // MapMember["SubjectId"] = "";
    // MapMember["Name"] = "";
    // MapMember["Qty"] = "";
}
Subject::Subject(string SubjectId, string name, int qty){
    this->SubjectId = SubjectId;
    this->Name = name;
    this->Qty = qty;
}
void Subject::FromMapMember(){
    this->SubjectId = MapMember["SubjectId"];
    this->Name = MapMember["Name"];
    this->Qty = stoi(MapMember["Qty"]);
}
void Subject::ToMapMember(){
    MapMember["SubjectId"] = this->SubjectId;
    MapMember["Name"] = this->Name;
    MapMember["Qty"] = to_string(this->Qty);
}
TableUnit* Subject::ClonePtr(){
    TableUnit* ptU = new Subject();
    return ptU;
}