#include"Mark.h"

Mark::Mark(){
    // MapMember["StudentId"] = "";
    // MapMember["SubjectId"] = "";
    // MapMember["_Mark"] = "";
}
Mark::Mark(string studentId, string subjectId, int _mark){
    this->StudentId = studentId;
    this->SubjectId = subjectId;
    this->_Mark = _mark;
}
void Mark::FromMapMember(){
    this->StudentId = MapMember["SubjectId"];
    this->SubjectId = MapMember["Name"];
    this->_Mark = stoi(MapMember["Qty"]);
}
void Mark::ToMapMember(){
    MapMember["SubjectId"] = this->StudentId;
    MapMember["Name"] = this->SubjectId;
    MapMember["Qty"] = to_string(this->_Mark);
}
TableUnit* Mark::ClonePtr(){
    TableUnit* ptU = new Mark();
    return ptU;
}