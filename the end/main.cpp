#include <iostream>
#include<string>
#include<fstream>
using namespace std;
struct c
{
    char name[20];
    char number;
    char brith;
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
    if((s=fopen("/Users/s20171105134/Desktop/data.csv","r"))==NULL)
    {
        printf("not excist\n");
        exit(-1);
    }
    else
    {
        fscanf(s,"%s",tittle);
        while(!feof(s))
        {
            fscanf(s,"%s ,%s ,%s ,%s ,%s ,%s ,",&a[i].number,a[i].name,a[i].sex,&a[i].brith,a[i].classes,a[i].tel);
            for(m=0;m<5;m++)
            {
                fscanf(s,"%d,",&a[i].rater[m]);
            }
            i++;
        }
       
        fclose(s);
    }
    j=i;
    for(i=0;i<j;j++)
    {
        a[i].max=0;
        a[i].min=100;
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
    b=fopen("/Usres/s20171105134/Desktop/data.csv","w");
    fprintf(b,"%s",tittle);
    i=0;
    while(i<j)
    {
        fprintf(b,"%d,%s,%s,%d,%s,%s",a[i].number,a[i].name,a[i].sex,a[i].brith,a[i].classes,a[i].tel);
        for(m=0;m<5;m++)
        {
            fprintf(b,"%d",a[i].rater[m]);
        }
        fprintf(b,"%lf",a[i].point);
        fprintf(b,"\n");
        i++;
    }
    fclose(b);
    return 0;
}
