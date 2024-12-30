#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,j,len=0;
	printf("Please enter a string : ");
          fgets(str, 100, stdin);
          {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            for(j=i; j<len; j++)
            {
                str[j]=str[j+1];
            }
            i--;
            len--;
            
        }
    }
    printf("after deleting vowels is %s",str);
          
          int k, vowels = 0;
          scanf("%[^\n]s",str);
          for(i=0; i<len; i++)
    
    
    for(k=0;str[k];k++)  
    {

        if(str[k]=='a'|| str[k]=='e'||str[k]=='i'||
           str[k]=='o'|| str[k]=='u'||str[k]=='A'||
           str[k]=='E'||str[k]=='I'||str[k]=='O' ||str[k]=='U')
        {
            vowels++;
        }
    }
 	
    
    printf("Total number of vowels: = %d\n",vowels);
    return 0;
          
}
