#ifndef bussinessobject_TableUnit_H_
#define bussinessobject_TableUnit_H_
#include<string>
#include<map>

using namespace std;
class TableUnit{
protected:
    map<string, string> MapMember;
public:
    TableUnit();
    virtual void FromMapMember() = 0;
    virtual void ToMapMember() = 0;
    virtual TableUnit* ClonePtr() = 0;

    map<string, string> GetMapMember();
    void SetMapMember(map<string, string>);
    string GetMemberValue(string);
    void SetMemberValue(string, string);
    string ToString();
    
};

#endif