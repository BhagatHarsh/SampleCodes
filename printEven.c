#include<stdio.h>
int f();
int main()
{
	int i,fac,n;
	scanf("%d",&n);
	i=n;
	while(i>0)
	{
		n=i%10;
		fac+=f(n);
        printf("%d\n",fac);
		i/=10;
	}
	printf("%d",fac);
	return 0;
}
int f(int i)
{
	int a,f=1;
	for(a=1;a<=i;a++)
	f=f*a;
	return f;
	
}