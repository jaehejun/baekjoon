#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	show(int *array, int N)
{
	int	i;

	i = 0;
	while (i < N)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
}

void	quicksort(int *data, int start, int end)
{
	if (start >= end)
		return ;

	int	key = start;
	int	i = start + 1;
	int	j = end;
	int	temp;

	while(i <= j)
	{
		while (i <= end && data[i] <= data[key])
			i++;
		while (j > start && data[j] >= data[key])
			j--;
		if (i > j)
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}

	quicksort(data, start, j - 1);
	quicksort(data, j + 1, end);
}

int	main(void)
{
	int	N;
	int	i;
	int	array[1000000];

	scanf("%d", &N);
	i = 0;
	while (i < N)
	{
		scanf("%d", &array[i]);
		i++;
	}
	quicksort(array, 0, N - 1);
	show(array, N);
	return (0);
}