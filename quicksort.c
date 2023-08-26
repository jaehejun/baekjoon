#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	swap(int *a, int *b);
void	print_array(int *array, int N);
void	quick_sort(int *array, int low, int high);

int	main(void)
{
	int	N;
	int	i;
	int	array[2000001];

	scanf("%d", &N);
	i = 0;
	for (i = 0; i < N; i++)
		scanf("%d", &array[i]);
	quick_sort(array, 0, N - 1);
	print_array(array, N);
	return (0);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	print_array(int *array, int N)
{
	int	i;

	i = 0;
	while (i < N)
	{
		printf("%d", array[i++]);
		if (i < N)
			printf("\n");
	}
}

void	quick_sort(int *array, int low, int high)
{
	int	pivot;
	int	left;

	if (low >= high)
		return ;
	left = low;
	srand((unsigned int)time(NULL));
	pivot = low + rand() % (high - low + 1);
	swap(&array[pivot], &array[high]);
	pivot = high;
	high--;
	while (low < high)
	{
		while (array[low] < array[pivot])
			low++;
		while (array[high] > array[pivot])
			high--;
		if (low < high)
			swap(&array[low], &array[high]);
		else
			swap(&array[low], &array[pivot]);
	}
	quick_sort(array, left, high);
	quick_sort(array, low + 1, pivot);
}
