//
// Created by llkser on 2019/6/12.
//
#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
#include "caseChange.h"
//tests for function caseChange().
int main(int argc, char **argv)
{
    //test1
    vector<vector<int>> test1={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    vector<vector<int>> result={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    test1=caseChange(test1);
    if(to_str(result)==to_str(test1))
        cout<<"Test 1 passed!"<<endl;
    else
        cout<<"Test 1 failed!"<<endl;
    //test2
    vector<vector<int>> test2={{1,1,1,1,1}};
    vector<vector<int>> result2={{0,1,1,1,0}};
    test2=caseChange(test2);
    if(to_str(result2)==to_str(test2))
        cout<<"Test 2 passed!"<<endl;
    else
        cout<<"Test 2 failed!"<<endl;
    //test3
    vector<vector<int>> test3={{1,1},{1,1}};
    vector<vector<int>> result3={{1,1},{1,1}};
    test1=caseChange(test3);
    if(to_str(result3)==to_str(test3))
        cout<<"Test 3 passed!"<<endl;
    else
        cout<<"Test 3 failed!"<<endl;

    return 0;
}

