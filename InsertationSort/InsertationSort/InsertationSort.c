#include <stdio.h>
#include <stdlib.h>

void InsertationSort(int DataSet[], int Length)
{
	int i = 0;
	int j = 0;
	int value = 0;

	for (i = 1; i < Length; i++)
	{
		if (DataSet[i - 1] <= DataSet[i])
			continue;

		value = DataSet[i];

		for (j = 0; j < i; j++) {
			if (DataSet[j] > value) {
				memmove(&DataSet[j + 1], &DataSet[j], sizeof(DataSet[0])*(i - j));
				DataSet[j] = value;
				break;
			}
		}
	}

}
int main()
{
	int DataSet[] = { 6, 4, 2, 3, 1, 5 };
	int Length = sizeof DataSet / sizeof DataSet[0];
	int i = 0;

	printf("Before Sort : ");
	for (i; i < Length; i++)
		printf("\t%d", DataSet[i]);
	printf("\n==========================================================================");

	InsertationSort(DataSet, Length);

	printf("\nAfter Sort : ");
	for (i = 0; i < Length; i++)
		printf("\t%d", DataSet[i]);
	puts("");

	system("pause");
	return 0;

}