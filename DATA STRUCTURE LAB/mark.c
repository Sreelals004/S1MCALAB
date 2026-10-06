#include<stdio.h>
int main()
{
int mark;
printf("enter mark:");
scanf("%d",&mark);
if(mark>89)
{
printf("A grade");
}
else if(mark>79)
{
printf("B grade");
}
else if(mark>69)
{
printf("C grade");
}
else if(mark>49)
{
printf("D grade");
}
else
{
printf("Failed");
}
return 0;
}
