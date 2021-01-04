#include"Student.h"

Student::Student(){
    MapMember["StudentId"] = "";
    MapMember["Name"] = "";
    MapMember["BDay"] = "";
    MapMember["Sex"] = "";
}
Student::Student(string studentId, string name, string bDay, string sex){
    this->StudentId = studentId;
    this->Name = name;
    this->BDay = bDay;
    this->Sex = sex;
}
void Student::FromMapMember(){
    this->StudentId = MapMember["StudentId"];
    this->Name = MapMember["Name"];
    this->BDay = MapMember["BDay"];
    this->Sex = MapMember["Sex"];
}
void Student::ToMapMember(){
    MapMember["StudentId"] = this->StudentId;
    MapMember["Name"] = this->Name;
    MapMember["BDay"] = this->BDay;
    MapMember["Sex"] = this->Sex;
}
TableUnit* Student::ClonePtr(){
    TableUnit* ptU = new Student();
    return ptU;
}