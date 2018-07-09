#include <iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<cstdlib>
#include <stdio.h>
using namespace std;
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
    double point;
    double sum=0;
    double max,min;    
};
int main()
{
    struct c a[2000];
    FILE *s;
    FILE*b;
    char tittle[100];
    int i=0,j=0,m;
    printf("%s",tittle);
    if((s=fopen("/Users/s20171105134/Desktop/student1.csv","r"))==NULL)
    {
        printf("文件不存在\n");
        exit(-1);
    }
    else
    {
        fscanf(s,"%s",tittle);       // fscanf(s,"%*[^\n]%*c");
        while(!feof(s))
        {
            fscanf(s,"%d,%[^,],%[^,],%d,%[^,],%[^,],",&a[i].number,a[i].name,a[i].sex,&a[i].brith,a[i].classes,a[i].tel);
            for(e=0;e<5;m++)
            {
                fscanf(s,"%d,",&a[i].rater[m]);
            }
            i++;
        }
        printf("%s",tittle);
        fclose(s);
    }
    j=i;
    for(i=0;i<j;j++)
    {
    	a[i].max=a[i].rater[0];
        a[i].min=a[i].rater[0];
        for(m=0;m<5;m++)
        {   
            if (a[i].rater[m]<a[i].min)
            {
                a[i].min=a[i].rater[m];
            }
            if(a[i].rater[m]>a[i].max)
            {
                a[i].max=a[i].rater[m];
            }            
        }
    }
    j=i;
    for(i=0;i<j;i++)
    {
        for(m=0;m<5;m++)
        {
            a[i].sum=a[i].rater[m]+a[i].sum;
            a[i].point =(a[i].sum-a[i].max-a[i].min)/3;
        }
    }
    j=i;
    b=fopen("/Usres/s20171105134/Desktop/student2.csv","w");
    fprintf(b,"%s",tittle);
    i=0;
    while(i<j)
    {
        fprintf(b,"%d,%s,%s,%d,%s,%s",a[i].number,a[i].name,a[i].sex,a[i].brith,a[i].classes,a[i].tel);
        for(m=0;m<5;m++)
        {
            fprintf(b,"%d",a[i].rater[e]);
        }
        fprintf(b,"%lf",a[i].point);
        fprintf(b,"\n");
        i++;
    }
    fclose(b);
    return 0;
}	 
