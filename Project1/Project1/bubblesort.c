#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int DataSet[], int Length)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 0; i < Length - 1; i++)
	{
		for (j = 0; j < Length - (i + 1); j++)
		{
			if (DataSet[j] > DataSet[j + 1])
			{
				temp = DataSet[j+1];
				DataSet[j + 1] = DataSet[j];
				DataSet[j] = temp;
			}
		}
	}
}

int main()
{	
	int DataSet[] = { 6,4,2,7,8,3,1,5 };
	int Length = sizeof DataSet / sizeof DataSet[0];
	int i = 0;

	printf("Before Sort : ");
	for (i = 0; i < Length; i++)
		printf("\t%d", DataSet[i]);
	printf("\n==========================================================================");

	BubbleSort(DataSet, Length);

	printf("\nAfter Sort : ");
	for (i = 0; i < Length; i++)
		printf("\t%d", DataSet[i]);
	puts("");


	system("pause");
	return 0;
}
