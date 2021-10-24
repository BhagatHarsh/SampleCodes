#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,u=0,l=0,s=0;
	char st[20];
	puts("Enter a String");
	gets(st);
	len=strlen(st);
	char up[len],low[len],sp[len];
	for(i=0;i<len;i++)
	{
		if(st[i]>=65&&st[i]<=90)
		{
			up[u]=st[i];u++;
		}
		else if(st[i]<=122&&st[i]>=97)
		{
			low[l]=st[i];l++;
		}
		else
		{
			sp[s]=st[i];s++;
		}
	}
	puts("\nUpperCase where:\n");
	for(i=0;i<u;i++)
	{
		printf("%c",up[i]);
	}
	puts("\nLowerCase where:\n");
	for(i=0;i<l;i++)
	{
		printf("%c",low[i]);
	}
	puts("\nSpecialCharacter and Numbers where:\n");
	for(i=0;i<s;i++)
	{
		printf("%c",sp[i]);
	}
	return 0;
}