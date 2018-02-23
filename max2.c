#include<stdio.h>
int main()
{
int a[50],i,j,k,temp;
scanf("\n%d",&k);
for(i=0;i<=k;i++)
{
scanf("\n %d",&a[i]);
}
for(i=0;i<=k;i++)
{
for(j=i+1;j<=k;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%d",a[k]);
return 0;
}
