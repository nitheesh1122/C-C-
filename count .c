#include <stdio.h>
#include <string.h>
int main()
{
    
    char str[100];
    int i,j,len=0;
    printf("Please enter a string : ");
    scanf("%[^\n]s",&str);
    fgets(str, 100, stdin);
    len=strlen(str);
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
    
      
    int a, vowels = 0;
    
    
    printf("Enter the string:");
    
    scanf("%[^\n]s",&str);
    
     
    for(i = 0; str[i]; i++)  
    {
        
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||
           str[i]=='o'|| str[i]=='u'||str[i]=='A'||
           str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
          vowels++;
        }
    }
 	
    
    printf("Total number of vowels: = %d\n",vowels);
    
    return 0;

    
}
