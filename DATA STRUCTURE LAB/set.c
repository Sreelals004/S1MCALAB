#include<stdio.h>
void main()
{
int i;
int u[5]={1,2,3,4,5};
int a[5]={1,0,0,1,1};
int b[5]={0,1,1,1,0};
int uni[5],ints[5],diffa[5],diffb[5],compa[5],compb[5];
printf("\n Universal Set is:{");
for(i=0;i<5;i++){
printf("%d" " ",u[i]);
}
printf("}\n");
printf("\n  Set A {");
for(i=0;i<5;i++){
if(a[i]==1){
printf("%d" " ",u[i]);}
}
printf("}\n");
printf("\n  Set B {");
for(i=0;i<5;i++){
if(b[i]==1){
printf("%d" " ",u[i]);}
}
printf("}\n");
printf("Union of A and B in bit representation is=");
for(i=0;i<5;i++)
{
uni[i]=a[i]|b[i];
printf("%d"" ",u[i]);
}
printf("\nUnion {");
for(i=0;i<5;i++){
if(uni[i]==1){
printf("%d" " ",u[i]);
}
}
printf("}\n");
printf("Intersection of A and B in bit representation is=");
for(i=0;i<5;i++)
{
ints[i]=a[i]&b[i];
printf("%d",ints[i]);
}
printf("\nIntersection {");
for(i=0;i<5;i++){
if(ints[i]==1){
printf("%d" " ",u[i]);
}
}
printf("}\n");
printf("Complement of A in bit representation is=");
for(i=0;i<5;i++)
{
compa[i]=1-a[i];
printf("%d",compa[i]);
}
printf("\n A Complement {");
for(i=0;i<5;i++){
if(compa[i]==1){
printf("%d" " ",u[i]);
}
}
printf("}\n");
printf("Complement of B in bit representation is=");
for(i=0;i<5;i++)
{
compb[i]=1-b[i];
printf("%d",compb[i]);
}
printf("\n B Complement {");
for(i=0;i<5;i++){
if(compb[i]==1){
printf("%d" " ",u[i]);
}
}
printf("}\n");
printf("Difference of A-B in bit representation is=");
for(i=0;i<5;i++)
{
diffa[i]=a[i]&compb[i];
printf("%d",diffa[i]);
}
printf("\n A-B {");
for(i=0;i<5;i++){
if(diffa[i]==1){
printf("%d" " ",u[i]);
}
}
printf("}\n");
printf("Difference of B-A in bit representation is=");
for(i=0;i<5;i++)
{
diffb[i]=b[i]&compa[i];
printf("%d",diffb[i]);
}
printf("\n B-A {");
for(i=0;i<5;i++){
if(diffb[i]==1){
printf("%d" " ",u[i]);
}
}
printf("}\n");
}
