#include<stdio.h>
int main()
{
int n,k,temp;
scanf("%d\t%d",&n,&k);
printf("\n before swapping:%d\t%d ",n,k);
temp=n;
n=k;
k=temp;
printf("\nAfter swapping: %d\t%d",n,k);
return 0;

}
