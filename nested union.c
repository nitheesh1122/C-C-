# include <stdio.h>
struct Data
{
	int datatype;
	union values
	{
		int intvalues;
		float floatvalues;
		char stringvalues[50];
	}value;
	
};
int main()
{
	struct Data data;
	printf("Enter data type(1 for int, 2 for float, 3 for string):");
	scanf("%d",&data.datatype);
	
	if (data.datatype==1)
	{
		printf("enter an integer value:");
		scanf("%d",&data.value.intvalues);
	}
	else if (data.datatype==2)
	{
		printf("enter a float value:");
		scanf("%f",&data.value.floatvalues);
	}
	else if (data.datatype==3)
	{
		printf("enter a string value:");
		scanf("%s",data.value.stringvalues);
	}
	
	printf("\nData:\n");
	if (data.datatype == 1)
	{
		printf("integer value:%d\n", data.value.intvalues);
	}
	else if (data.datatype == 2)
	{
		printf("float value:%f\n",data.value.floatvalues);
	}
	else if (data.datatype == 3)
	{
		printf("string value:%s\n", data.value.stringvalues);
	}
	return 0 ;
}

