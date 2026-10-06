#include<stdio.h>
int main()
{
int arr[10],i,n;
printf("enter the no:of element");
scanf("%d",&n);
printf("enter the numbers:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("even numbres aree:\n");
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
{
printf("%d\n",arr[i]);
}
}
printf("odd numbres aree:\n");
for(i=0;i<n;i++)
{
if(arr[i]%2!=0)

printf("\n%d\n",arr[i]);

}
return 0;
}
