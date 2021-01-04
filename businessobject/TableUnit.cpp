#include "TableUnit.h"

TableUnit::TableUnit(){}
map<string, string> TableUnit::GetMapMember(){
    return MapMember;
}
void TableUnit::SetMapMember(map<string, string> mapMember){
    MapMember = mapMember;
}
string TableUnit::GetMemberValue(string key){
    return MapMember[key];
}
void TableUnit::SetMemberValue(string key, string value){
    MapMember[key] = value;
    FromMapMember();
}
string TableUnit::ToString(){
    ToMapMember();
    string s = "";
    //map<string, string>::iterator it;
    for(auto it = MapMember.begin(); it != MapMember.end(); it++){
        s = s + it->first + ": " + it->second + "\n";
    }
    s += "----------------------------------------------------\n";
    return s;
}