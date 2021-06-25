// #include <Python.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <regex>
#include "Interpreter.h"
#include "Basicop.h"
// #include "Attribute.h"

using namespace std;

// string query = "create table s(charattr char(10), intattr int not null unique, floatattr float not null unique, primary key(intattr))";
// string query = "Drop Table muring";
// string query = "insert into s values(\"chartest\", 10, 10.5)";
// 上面三个都可以通过和Catalog的测试了
// string query = "select intattr, floatattr from testtable";
// string query = "create index idname on tbname(asdkhfjabldkfjykugl)";
// string query = "select a.attr b.attr from table1 as a, table2 as b where a.v1 = b.v2";

int main(int argc, char *argv[])
{
    int i;
    string str;
    Interpreter I;
    for( i = 10; i < 10010; i++){
        str = "insert into speedtest4 values( " + to_string(i) + " , " + to_string(i) + "\")";
        if( i == 10){
            cout<<str<<endl;
        }
        I.Parse(str);
        printf("\r%d", i);
    }
    // for( i = 10; i < 1010; i++){
    //     str = "insert into speedtest3 values( " + to_string(i) + " , " + to_string(i) + " , \"" + to_string(i) + "\")";
    //     if( i == 10){
    //         cout<<str<<endl;
    //     }
    //     I.Parse(str);
    //     printf("\r%d", i);
    // }
    // for( i = 10; i < 1050; i++){
    //     str = "insert into speedtest values( " + to_string(i) + " , " + to_string(i) + ")";
    //     I.Parse(str);
    //     printf("\r%d", i);
    // }
    // for( i = 10; i < 1050; i++){
    //     str = "insert into speedtest2 values( \" " + to_string(i) + "\")";
    //     I.Parse(str);
    //     printf("\r%d", i);
    // }
    delete &I;
    // system("pause");
    return 0;
}