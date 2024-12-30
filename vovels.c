#include <stdio.h>
#include <string.h>
int main()
{
    
    char str[100];
    int i,j,len=0;
    printf("Please enter a string : ");
    fgets(str, 100, stdin);
    len=strlen(str);
    
    
    char st[100];  
    int k, vowels = 0;
   printf("Enter the string: ");
    
    scanf("%[^\n]s",&st);
    
    
   
    for(i=0; i<len; i++)
    
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
    printf("After deleting the vowels string is : %s",str);
 
    
    for(k= 0; st[k]; k++)  
    {

        if(st[k]=='a'|| st[k]=='e'||st[k]=='i'||
           st[k]=='o'|| st[k]=='u'||st[k]=='A'||
           st[k]=='E'||st[k]=='I'||st[k]=='O' ||st[k]=='U')
        {
            vowels++;
        }
    }
 	
    
    printf("Total number of vowels: = %d\n",vowels);
    
   
    
    
   
     
    
    return 0;

    
}
