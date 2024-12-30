#include<stdio.h>
main()
{
	FILE *a;
	char buff[255];
	a=fopen("E://star.txt","r");
	while(fscanf(a,"%s",buff)!=EOF)
	{
		printf("%s",buff);
	}
		fclose(a);
}

//fopen---to open a file
//fclose---to close a file
//fprintf(),fscanf().....
 
//read---r----reads the content in the file

