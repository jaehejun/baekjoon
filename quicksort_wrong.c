#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	swap(int *a, int *b);
void	print_array(int *array, int n);
void	quick_sort(int *array, int low, int high);

int	main(void)
{
	int	n;
	int	i;
	int	array[1000000];

	scanf("%d", &n);
	i = 0;
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);
	srand((unsigned int)time(NULL));
	quick_sort(array, 0, n - 1);
	print_array(array, n);
	return (0);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	print_array(int *array, int n)
{
	int	i;

	i = 0;
	while (i < n)
		printf("%d\n", array[i++]);
}

void	quick_sort(int *array, int low, int high)
{
	int	pivot;
	int	left;

	if (low >= high)
		return ;
	left = low;
	pivot = low + rand() % (high - low + 1);
	swap(&array[pivot], &array[high]);
	pivot = high;
	high--;
	while (low <= high)
	{
		while (array[low] < array[pivot])
			low++;
		while (array[high] > array[pivot] && high > left)
			high--;
		if (low < high)
			swap(&array[low], &array[high]);
		else
			swap(&array[low], &array[pivot]);
	}
	quick_sort(array, left, high);
	quick_sort(array, low + 1, pivot);
}
