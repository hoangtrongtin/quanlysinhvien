#ifndef bussinessobject_Mark_H_
#define bussinessobject_Mark_H_
#include<string>
#include<map>
#include"TableUnit.h"

using namespace std;
class Mark : public TableUnit{
private:
    string StudentId;
    string SubjectId;
    int _Mark;
public:
    Mark();
    Mark(string, string, int);
    void FromMapMember() override;
    void ToMapMember() override;
    TableUnit* ClonePtr() override;    
};

#endif