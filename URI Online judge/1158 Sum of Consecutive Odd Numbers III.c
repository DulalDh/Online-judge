#include<stdio.h>
main()
{
int i,a[10000],b[10000],n,n2,j,sum=0,count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
n2=a[i];
for(j=1; ;j++)
{
if(n2%2!=0)
{
sum=sum+n2;
count++;
}
n2++;
if(b[i]==count)
    break;
}
printf("%d\n",sum);
count=0;
sum=0;
}
}