#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,c;
	char str[100][100],s[100];
	printf("enter the number of the names:");
	scanf("%d",&c);
	printf("enter the names in any order;");
	for(a=0;a<c;a++)
	{
		scanf("%s",str[a]);
	}
	for(a=0;a<c;a++)
	{
		for(b=a+1;b<c;a++)
		{
			if(strcmp(str[a],str[b])>0)
			{
				strcpy(s,str[a]);
				strcpy(str[a],str[b]);
				strcpy(str[b],s);
			}
			
		}
		
	}
	printf("The stored order of the names are:%s",str[a]);
	for(a=0;a<c;a++)
	{
		printf("%s",str[a]);
	}
return 0;
}
