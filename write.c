#include<stdio.h>
main()
{
	FILE *b;
	b=fopen("E://starring.txt","a");
	fprintf(b,"WELCOME TO....\n");
	fclose(b);
}

//write--w-- ----if file does not exsits,create new txt document
//    and add tthe content in the file

//write ----if file exsits,
//    overwrites the content in the file

//append ----if file exsits,adds the content in the file
//  

