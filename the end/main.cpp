#include <iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<cstdlib>
#include <sstream>
#include <stdio.h>
#include <vector>
using namespace std;
//结构定义struct

string Trim(string& str)
{
    //str.find_first_not_of(" \t\r\n"),在字符串str中从索引0开始，返回首次不匹配"\t\r\n"的位置
    str.erase(0,str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n") + 1);
    return str;
}

int main( int argc,const char * argv[])
{
    FILE *a;
    char name[20];
    int number[20];
    char sex[5];
    char classes[20];
    int score[20];
    int rater1[20],rater2[20],rater3[20],rater4[20],rater5[20];
    int tel[20];
    int point[20];
    int sum[20];
    int i,j;
    if(a=fopen("/Users/s20171105134/Desktop/the end/data.csv","r")==0)
    {
        printf("文件不存在\n");
    }
    else
    {
      
    
    /*struct information a[200];
    FILE*fp1,*fp2;
    //FILE *fp1；
    //fp1 = fopen("xxxxx",w)；
    //xxxxx表示路径，w表示打开文件方式，这段代码是将文件指针赋给fp1。
    int i,j;

    fp1=fopen("/Users/s20171105134/Desktop/the end/the end/data.csv","r")；
    //“r” 只读打开一个文本文件，只允许读数据文件必须存在
    if(fp1==NULL)
    {
        printf("error");
       //如果操作系统检测到程序退出时exit的参数是-1，那么就可以知道是因为if(fp1==NUL)中的表达式为真而退出的。如果不是-1而是其他的数字，那么代表程序是在其他地方退出的。
        exit(-1);
    }
    else
    {
        //其功能为根据数据格式(format)从输入流(stream)中写入数据(argument)；与fgets的差别在于：fscanf遇到空格和换行时结束，注意空格时也结束
        fscanf(fp1,"%*[^\n]%*c");
        //%*[^\n]
        //这个通配符的意思就是
        //跳过所有字符 直到换行符为止。
        //%*c 是“跳过”行尾 的 换行符。*/
        for(i=0;i<j;i++)
        {
            //%[^,] 匹配非,的任意字符
            fscanf(a,%d,%s,%[^,],%d,%[^,],%[^,],%d,%d,%d,%d,%d,&a[i].number,&a[i].name,&a[i].sex,&a[i].brith,&a[i].classes,&a[i]tel,&a[i].rater1,&a[i].rater2,&a[i].rater3,&a[i].rater4,&a[i].rater5);
        }
        j=i;
              for(i=0;i<j;i++)
        {
            printf("%d,%s,%s,%d,%s,%s,%d,%d,%d,%d,%d\n",a[i].number,a[i].name,a[i].sex,a[i].brith,a[i].classes,a[i].tel,a[i].rater1,,a[i].rater2,,a[i].rater3,,a[i].rater4,,a[i].rater5);
        }
        fclose(fp1);
        }
    j=i;
    }
    //使i，j的值等于0
    int max[100],min[100];
        //排序
    for(i=0;i<j;i++)
        {
                max[i]=a[i].rater1;
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
               min[i]=a[i].rater1;
               if(a[i].rater2<min[i])
                   min[i]=a[i].rater2;
               if(a[i].rater3<min[i])
                   min[i]=a[i].rater3;
               if(a[i].rater4<min[i])
                   min[i]=a[i].rater4;
               if(a[i].rater5<min[i])
                   min[i]=a[i].rater5;

        }
    i=j;
    for(i=0;i<j;i++)
    {
        
        a[i].sum=(a[i].rater1+a[i].rater2+a[i].rater3+a[i].rater4+a[i].rater5);

    }
    j=i;
    for(i=0;i<j;i++)
    {
        a[i].point=(a[i].sum-max[i]-min[i])/3;
    }
    j=i;
    i=0;
        //fprintf其作用是格式化输出到一个流/文件中
    while(i<j)
    {
         fprintf(fp2,"%d,%s,%s,%d,%s,%d,%d,%d,%d,%d,%d\n")
    }
}
