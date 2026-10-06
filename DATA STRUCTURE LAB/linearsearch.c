#include<stdio.h>
int main()
{
int arr[10],n,i,c,f=0;
printf("enter the no:of element:");
scanf("%d",&n);
printf("enter the element:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("enter the element to search:");
scanf("%d",&c);
for(i=0;i<n;i++)
{
if(arr[i]==c)
{
printf("element founf in %d position",i+1);
f++;
break;
}}
if(f==0)
printf("Element not found");

return 0;
}
