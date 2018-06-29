//
//  main.cpp
//  the end
//
//  Created by hechangfei on 18/6/21.
//  Copyright © 2018年 hechangfei. All rights reserved.
//

#include <iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<cstdlib>
#include <streambuf>
#include <sstream>
#include <vector>
#define _GNU_SOURCE
#include <stdio.h>
using namespace std;
string Trim(string& str)
{
    //str.find_first_not_of(" \t\r\n"),在字符串str中从索引0开始，返回首次不匹配"\t\r\n"的位置
    str.erase(0,str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n") + 1);
    return str;
}
int main()
{
    ifstream inFile("studentdata.csv", ios::in);
    string lineStr;
    vector<vector<string>> strArray;
    int array[3][3];
    int i,j;
    i=0;
    char* end;
    if(inFile.fail())
        cout<<"读取文件失败"<<endl;
    //文件读取成功
    while (getline(inFile, lineStr))
    {
        j=0;
        // 打印整行字符串
        cout << lineStr << endl;
        // 存成二维表结构
        stringstream ss(lineStr);
        string str;
        vector<string> lineArray;
        // 按照逗号分隔
        while (getline(ss, str, ','))
        {
            array[i][j]=static_cast<int>(strtol(str.c_str(),&end,10));         //string -> int
            j++;
        }
        i++;
    }
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cout<<array[i][j];
        cout<<endl;
    }
    getchar();

        return 0;
}
