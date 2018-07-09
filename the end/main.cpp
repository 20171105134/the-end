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
    int number;
    int brith;
    char sex[10];
    char classes[20];
    int score[20];
    int rater[20];
    char tel[20];
    int point;
    int sum=0;
    int max,min;
    
};

int main()
{
    struct c a[2000];
    FILE *s;
   // FILE*b;
  //  double sum[20];
    
    char bt[100];
    int i=0,j=0,n=0,e;
   // int i=0;
    //printf("1");
    
       printf("%s",bt);
   /* ifstream fin("/Users/s20171105134/Desktop/data.csv");
    string line;
    while (getline(fin,line))
    {
        n++;
    }*/
   if((s=fopen("/Users/s20171105134/Desktop/student1.csv","r"))==NULL)
    {
        printf("文件不存在\n");
        exit(-1);
    }
    else
    {
        fscanf(s,"%s",bt);       // fscanf(s,"%*[^\n]%*c");
        printf("1");
      
        while(!feof(s))
        {
            fscanf(s,"%d,%[^,],%[^,],%d,%[^,],%[^,]",&a[i].number,a[i].name,a[i].sex,&a[i].brith,a[i].classes,a[i].tel);
           //
            for(e=0;e<5;e++)
            {
                fscanf(s,"%d",&a[i].rater[e]);
            }
            i++;
            //printf("%d",i);
        }
        printf("%s",bt);
        fclose(s);
    }
   // printf("%d",a[0].rater[0]);
    j=i;
    for(i=0;i<j;i++)
    {
        a[i].max=a[i].rater[0];
        a[i].min=a[i].rater[0];
    }
    j=i;
 
            for(i=0;i<j;j++)
            {
                for(e=0;e<5;e++)
                 {
  
                if (a[i].rater[e]<a[i].min)
                  {
                      a[i].min=a[i].rater[e];
                  }
                if(a[i].rater[e]>a[i].max)
                   {
                       a[i].max=a[i].rater[e];
                   }

                 }
            }
    
             /* for(i=0;i<j;i++)
        {
            printf("%d,%s,%s,%d,%s,%s,%d,%d,%d,%d,%d\n",a[i].number,a[i].name,a[i].sex,a[i].brith,a[i].classes,a[i].tel,a[i].rater1,a[i].rater2,a[i].rater3,a[i].rater4,a[i].rater5);
        }*/
                     
                     
   
    j=i;
    for(i=0;i<j;i++)
    {
        for(e=0;e<5;e++)
    {
        a[i].sum=a[i].rater[e]+a[i].sum;
        a[i].point =(a[i].sum-a[i].max-a[i].min)/3;

    }
    }
    
        
        
            //fprintf其作用是格式化输出到一个流/文件中
        return 0;
}

