//WRITE A PROGRAM IN C TO INPUT 5 SUBJECT FROM CLASS 12 AND CALCULATE THE AVERAGE OF THE GRADES
#include<stdio.h>
int main()
{
int m,s,sst,b,e,a,avg;
printf("Enter Maths Marks:\n");
scanf("%d",&m);
printf("Enter Science Marks:\n");
scanf("%d",&m);
printf("Enter Maths Marks:\n");
scanf("%d",&s);
printf("Enter Social Studies Marks:\n");
scanf("%d",&sst);
printf("Enter Bengali Marks:\n");
scanf("%d",&b);
printf("Enter English Marks:\n");
scanf("%d",&e);
a=m+s+sst+b+e;
avg=a/5;
printf("Average of all the marks is:%d\n",avg);
}

