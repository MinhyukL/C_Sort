#include <stdio.h>
#include <stdlib.h>

void Swap(int *A, int *B)
{
	int *Temp = *A;
	*A = *B;
	*B = Temp;
}

int Partition(int DataSet[], int Left, int Right)
{
	int First = Left;
	int Pivot = DataSet[First];

	++Left;

	while (Left <= Right)
	{
		while (DataSet[Left] <= Pivot && Left < Right)
			++Left;
		while (DataSet[Right] > Pivot && Left <= Right)
			--Right;

		if (Left < Right)
			Swap(&DataSet[Left], &DataSet[Right]);
		else
			break;
	}

	Swap(&DataSet[First], &DataSet[Right]);

	return Right;
}

void QuickSort(int DataSet[], int Left, int Right)
{
	if (Left < Right)
	{
		int Index = Partition(DataSet, Left, Right);
	
		QuickSort(DataSet, 0, Index - 1);
		QuickSort(DataSet, Index + 1, Right);
	}
}

int main()
{
	int DataSet[] = { 6,4,2,1,3,5 };
	int Length = sizeof DataSet / sizeof DataSet[0];

	QuickSort(DataSet, 0, Length - 1);

	for (int i = 0; i < Length; i++)
		printf("%d", DataSet[i]);

	system("pause");
	return 0;
}