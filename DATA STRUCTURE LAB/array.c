#include<stdio.h>
int main()
{
int arr[10],i,n,sum=0;
printf("enter the no:of element:");
scanf("%d",&n);
printf("enter the element:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("the elements are:\n");
for(i=0;i<n;i++)
printf("%d \t",arr[i]);
for(i=0;i<n;i++)
sum=sum+arr[i];
printf("\nsum=%d",sum);
return 0;
}

