#include<iostream>
#include<string>
#include "businessobject/TableUnit.h"
#include "businessobject/Student.h"
#include "businessobject/Subject.h"
#include "businessobject/Mark.h"

#include "dataaccess/TableData.h"
#include "ui/MyIO.h"

using namespace std;

int main(){
    TableData* StudentData = new TableData(new Student());
    TableUnit* Std1 = new Student("SV0001", "Do Thi Ha", "1992-12-22", "Nu");
    TableUnit* Std2 = new Student("SV0002", "Le Binh Minh", "2000-08-19", "Nam");
    TableUnit* Std3 = new Student("SV0003", "Nguyen Minh Canh", "1997-04-09", "Nam");
    TableUnit* Std4 = new Student("SV0004", "Le Huu Long", "2000-01-02", "Nam");
    StudentData->PushBack(Std1);
    StudentData->PushBack(Std2);
    StudentData->PushBack(Std3);
    StudentData->PushBack(Std4);

    TableData* SubjectData = new TableData(new Subject());
    TableUnit* Sub1 = new Subject("HP0001", "Tin hoc Dai cuong", 3);
    TableUnit* Sub2 = new Subject("HP0002", "Phap luat Dai cuong", 2);
    TableUnit* Sub3 = new Subject("HP0003", "Chinh tri", 5);
    TableUnit* Sub4 = new Subject("HP0004", "Tieng anh", 2);
    TableUnit* Sub5 = new Subject("HP0005", "C++", 3);
    SubjectData->PushBack(Sub1);
    SubjectData->PushBack(Sub2);
    SubjectData->PushBack(Sub3);
    SubjectData->PushBack(Sub4);
    SubjectData->PushBack(Sub5);

    TableData* MarkData = new TableData(new Mark());
    TableUnit* Mark1 = new Mark("SV0001", "HP0001", 8);
    TableUnit* Mark2 = new Mark("SV0001", "HP0002", 6);
    TableUnit* Mark3 = new Mark("SV0001", "HP0003", 8);
    TableUnit* Mark4 = new Mark("SV0004", "HP0004", 2);
    TableUnit* Mark5 = new Mark("SV0002", "HP0005", 3);
    TableUnit* Mark6 = new Mark("SV0002", "HP0001", 9);
    TableUnit* Mark7 = new Mark("SV0003", "HP0002", 5);
    TableUnit* Mark8 = new Mark("SV0004", "HP0003", 10);
    MarkData->PushBack(Mark1);
    MarkData->PushBack(Mark2);
    MarkData->PushBack(Mark3);
    MarkData->PushBack(Mark4);
    MarkData->PushBack(Mark5);
    MarkData->PushBack(Mark6);
    MarkData->PushBack(Mark7);
    MarkData->PushBack(Mark8);

    TableData* arrTD[3] = {StudentData, SubjectData, MarkData}; 

    MyIO myIO;
    cout << "   Select option: " << endl;
    cout << "   1. Add to table." << endl;
    cout << "   2. Edit table." << endl;
    cout << "   3. Delete data on table." << endl;
    cout << "   4. Show table." << endl;
    cout << "   5. Show students with highest mark." << endl;
    cout << "   6. Show students with highst years old." << endl;
    int optionSelect = 0; cin >> optionSelect; cin.ignore();
    while (optionSelect > 0 && optionSelect < 5){
        cout << "   Select table: " << endl;
        cout << "   0. Quit." << endl;
        cout << "   1. Student." << endl;
        cout << "   2. Subject." << endl;
        cout << "   3. Mark" << endl;
        int tableSelect = 0; cin >> tableSelect; cin.ignore();
        if (tableSelect == 0) break;
        if (tableSelect < 0 || tableSelect > 3){
            cout << "   Wrong selection!" << endl;
            continue;
        }
        switch(optionSelect){
            case 1:
                myIO.AddData(arrTD[tableSelect-1]);
                break;
            case 2:
                myIO.EditData(arrTD[tableSelect-1]);
                break;
            case 3:
                myIO.DeleteData(arrTD[tableSelect-1]);
                break;
            case 4:
                myIO.PrintData(arrTD[tableSelect-1]);
                break;
            default:
                cout << "   Wrong selection!" << endl;
        }
    }
    return 0;
}