#include <iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<cstdlib>
#include <stdio.h>
using namespace std;
//结构定义struct
struct c
{
    char name[20];
    int number[20];
    int brith;
    char sex[5];
    char classes[20];
    int score[20];
    int rater1[20],rater2[20],rater3[20],rater4[20],rater5[20];
    int tel[20];
    int point[20];
    double sum[20];
    double max,min;
    
};

string Trim(string& str)
{
    //str.find_first_not_of(" \t\r\n"),在字符串str中从索引0开始，返回首次不匹配"\t\r\n"的位置
    str.erase(0,str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n") + 1);
    return str;
}

int main( int argc,const char * argv[])
{
    struct c a[2000];
    FILE *s;
    FILE*b;
    double sum[20];
    
    int i=0,j=0,n=0;
    
    ifstream fin("/Users/s20171105134/Desktop/the end/the end/data.csv");
    string line;
    while (getline(fin,line))
    {
        n++;
    }
    if((s=fopen("/Users/s20171105134/Desktop/the end/the end/data.csv","r"))==0)
    {
        printf("文件不存在\n");
    }
    else
    {
        while(fscanf(s,"%d ,%s ,%s ,%d ,%s ,%d ,%d ,%d ,%d ,%d ,%d",a[i].number,a[i].name,a[i].sex,a[i].brith,a[i].classes,a[i]tel,a[i].rater1,a[i].rater2,a[i].rater3,a[i].rater4,a[i].rater5))
      
        {
            s[i].min=rater[1];
            for(i=0;j<5;j++)
            {
                
                if (a[i].rater[j]<s[i].min)
                  {
                      s[i].min=s[i].rater[j];
                  }
            }
            a[i].max=rater[1];
            for(i=0;j<5;j++)
            {
               if(a[i].rater[j]>a[i].max)
               {
                   a[i].max=a[i].rater;
               }
            }
        }
    ｝
        
             /* for(i=0;i<j;i++)
        {
            printf("%d,%s,%s,%d,%s,%s,%d,%d,%d,%d,%d\n",a[i].number,a[i].name,a[i].sex,a[i].brith,a[i].classes,a[i].tel,a[i].rater1,a[i].rater2,a[i].rater3,a[i].rater4,a[i].rater5);
        }*/
    a[i].min＝a[i].point[0];
    for(i=0;j<5;j++)
    {
        
        a[i].sum=(a[i].rater1+a[i].rater2+a[i].rater3+a[i].rater4+a[i].rater5);

    }
    j=i;    for(i=0;i<j;i++)
    {
        a[i].point=(a[i].sum-max[i]-min[i])/3;
    }
        //fprintf其作用是格式化输出到一个流/文件中
        return 0;
}
