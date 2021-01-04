#ifndef bussinessobject_Student_H_
#define bussinessobject_Student_H_
#include<string>
#include<map>
#include"TableUnit.h"

using namespace std;
class Student : public TableUnit{
private:
    string StudentId;
    string Name;
    string BDay;
    string Sex;
public:
    Student();
    Student(string, string, string, string);
    void FromMapMember() override;
    void ToMapMember() override;
    TableUnit* ClonePtr() override;    
};

#endif