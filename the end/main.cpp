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
//结构定义struct
struct information
{
    char name[20];
    int number;
    char sex[5];
    char classes[20];
    int score;
    int rater1,rater2,rater3,rater4,rater5;
    int tel;
    int sum=rater1+rater2+rater3+rater4+rater5;
};
int main()
{
    struct information a[200];
    FILE*fp1,*fp2;
    //FILE *fp1；
    //fp1 = fopen("xxxxx",w)；
    //xxxxx表示路径，w表示打开文件方式，这段代码是将文件指针赋给fp1。
    int i,j;
    fp1=fopen("/Users/s20171105134/Desktop/test621/studentdata.csv","r")；
    //“t” 只读打开一个文本文件，只允许读数据文件必须存在
    if(fp1==NULL)
    {
        printf("error");
       //如果操作系统检测到程序退出时exit的参数是-1，那么就可以知道是因为if(fp1==NUL)中的表达式为真而退出的。如果不是-1而是其他的数字，那么代表程序是在其他地方退出的。
        exit(-1);
    }
    else
    {
        fscanf(fp1,"%*[^\n]%*c");
        //%*[^\n]
        //这个通配符的意思就是
        //跳过所有字符 直到换行符为止。
        //%*c 是“跳过”行尾 的 换行符。
        while(!feof(fp1))
        {
            //%[^,] 匹配非,的任意字符
            fscanf(fp1,%d,%[^,],%[^,],%d,%[^,],%[^,],%d,%d,%d,%d,%d,&a[i].number,&a[i].name,&a[i].sex,&a[i].brith,&a[i].classes,&a[i]tel,&a[i].rater1,&a[i].rater2,&a[i].rater3,&a[i].rater4,&a[i].rater5);
            i++;
        }
        j=i;
        for(i=0;i<j;i++)
        {
            printf("%d,%s,%s,%d,%s,%s,%d,%d,%d,%d,%d\n",&a[i].number,&a[i].name,&a[i].sex,&a[i].brith,&a[i].classes,&a[i].tel,&a[i].rater1,,&a[i].rater2,,&a[i].rater3,,&a[i].rater4,,&a[i].rater5);
        }
        fclose(fp1);
    }
    j=i;
    int max[100],min[100];
    
    for(i=0;i<j;i++)
        {
            max[i]=min[i]=a[i].rater1;
        }
    j=i;
    //排序
    for(i=0;i<j;i++)
        {
                if(a[i].rater2>max[i])
                    max[i]=a[i].rater2;
                if(a[i].rater3>max[i])
                    max[i]=a[i].rater3;
                if(a[i].rater4>max[i])
                    max[i]=a[i].rater4;
                if(a[i].rater5>max[i])
                    max[i]=a[i].rater5;
        }
    for(i=0;i<j;i++)
        {
               if(a[i].rater2<min[i])
                   min[i]=a[i].rater2;
               if(a[i].rater3<min[i])
                   min[i]=a[i].rater3;
               if(a[i].rater4<min[i])
                   min[i]=a[i].rater4;
               if(a[i].rater5<min[i])
                   min[i]=a[i].rater5;

        }
    j=i;
    for(i=0;i<j;i++)
    {
    
    }
}
