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
int main(int argc, char* argv[]){
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
    while (getline(inFile,lineStr))
    {
        j=0;        // 打印整行字符串
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
    
    
    
    
    
    string                        strTemp;
    vector<string>                strLinesBuffer;                        //【1】以行的形式存储CSV文件读入的内容
    vector<string>                strAll;                               //【2】以单个字段的形式存储CSV文件中所有的内容
    vector<std::vector<string>>   strTable;                                //【3】存储表格中的内容
    
    
	   int         iRows     = 0;                                        //【1】CSV文件中的行数
	   int         iCols     = 0;                                        //【2】CSV文件中的列数

	   while(getline(inFile,lineStr))
       {
           strLinesBuffer.push_back(strTemp);
           std::cout<<strTemp<<std::endl;
           char*  tmpString;
           tmpString=strtok((char*)strTemp.c_str(),";");
           
           while (tmpString)
           {
               if(!strcmp(tmpString,""))
               {
                   std::system("pause");
               }
               else
               {
                   strAll.push_back(tmpString);
                   std::cout<<tmpString<<std::endl;
               }
               tmpString = strtok(NULL,";");
           }
           strTable.push_back(strAll);
       }
	   iRows = strTable.size();
	   iCols = strAll.size()/iRows;
	   std::cout<<"[1]CSV文件中行的总数"<<iRows<<std::endl;
	   std::cout<<"[2]CSV文件中列的总数"<<iCols<<std::endl;
    
    
	   double dSum = 0;
	   std::vector<double>   doubleTable;
    

    
    
    
    
        //模块说明:
        //将读入的CSV表格(字符串)格式-----转化为-----可以用于计算的double型表格
        
        
        
        for(int i=0;i<53;i++)
       {
           for(int j=0;j<11;j++)
           {
               std::string tmp = (strAll[i*iRows+j]);
               std::istringstream  isStrTmp(tmp);
               double   num = 0.0;
               isStrTmp>>num;
               std::printf("%f",num);
               doubleTable.push_back(num);
           }
           std::cout<<std::endl;
       }
	   
    
    
       // 模块说明:
        //1）以上模块已经将CSV中的数据准备完毕
        //2）已经将数据转化为可用于计算的double型数据，并且，数据以单纬动态数组的形式存储于doubleTable

        
	   double   sum     = 0.0;
	   int      iCalCol = 1;                                        //【1】待计算第几列的数据，列标号
	   for(int i=0;i<50;i++)
       {
           for(int j=0;j<11;j++)
           {
               if(j == iCalCol)
               {
                   sum += doubleTable[i*iRows+j];
               }
           }
           //std::cout<<std::endl;
       }
	   std::cout<<"[Output Information]第"<<iCalCol<<"列的平均值 = "<<sum/iRows<<std::endl;
	   std::system("pause");


    
    return 0;
}




