#ifndef bussinessobject_Subject_H_
#define bussinessobject_Subject_H_
#include<string>
#include<map>
#include"TableUnit.h"

using namespace std;
class Subject : public TableUnit{
private:
    string SubjectId;
    string Name;
    int Qty;
public:
    Subject();
    Subject(string, string, int);
    void FromMapMember() override;
    void ToMapMember() override;
    TableUnit* ClonePtr() override;    
};

#endif