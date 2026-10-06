#include<stdio.h>
void main()
{
int a[50],b[50],c[100],i,j,m,n,k;
printf("enter the size of the first array:");
scanf("%d",&m);
printf("enter the element of first array(sorted order): ");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf("enter the size of second array");
scanf("%d",&n);
printf("enter the element of second array(sorted order): ");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
i=0;
j=0;
k=0;
while(i<m && j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;

}
k++;
}
while(i<m)
{
c[k]=a[i];
i++;
k++;

}
while(j<n)
{
c[k]=b[j];
j++;
k++;

}
printf("\n merged array=");
for(i=0;i<m+n;i++)
{
printf("%d \t",c[i]);
}
}
