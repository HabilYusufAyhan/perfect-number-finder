#include<stdio.h>
#include<stdlib.h>

int main()
{
	int value,output=0;


	printf("please enter the value\n");
	scanf_s("%d", &value);
	for (int i = 1; i < value; i++)
	{
		if (value % i == 0 && value != i)
		{
			output += i;
		}
	}
	if (output == value)
	{
		printf("value is the perfect number\n");
	}
	else
	{
		printf("value isn't a perfect number\n");
	}
	system("pause");
}