//오름차순으로 정렬하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5] = { 95, 75, 85, 100, 50 };
	int i, j, num;

	for (i = 0; i <= 4; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				num = arr[j];
				arr[j] = arr[i];
				arr[i] = num;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
