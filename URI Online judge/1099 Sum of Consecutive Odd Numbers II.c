#include<stdio.h>
main()
{
int n,i,j,a[10000],b[10000],sum[10000];
for(i=0;i<n;i++)
{
sum[i]=0;
scanf("%d",&a[i]);
scanf("%d",&b[i]);
if(a[i]>b[i])
{
for(j=b[i]+1;j<a[i];j++)
{
if(j%2!=0)
sum[i]=sum[i]+j;
}
}
if(a[i]<b[i])
{
for(j=a[i]+1;j<b[i];j++)
{
if(j%2!=0)
sum[i]=sum[i]+j;
}
}
}
for(i=0;i<n;i++)
printf("%d\n",sum[i]);
}