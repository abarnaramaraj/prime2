int main()
{
int n,i,flag=0;
printf("enter a num");
scanf("%d".&n);
for(i=0;i<=n/2;++i)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("prime");
else
printf("not prime");
return 0
}
