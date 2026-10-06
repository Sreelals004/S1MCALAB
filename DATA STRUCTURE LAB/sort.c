#include<stdio.h>
void main()
{
int n,i,j,arr[50],temp;
printf("enter the limit of the array:");
scanf("%d",&n);
printf("enter the element:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("\n sorted array=");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
}
