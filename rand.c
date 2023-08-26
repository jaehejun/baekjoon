#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int	main(void)
{
	int	i;
	int	low;
	int	high;

	i = 0;
	low = 10;
	high = 20;
	srand((unsigned int)time(NULL));
	while (i < 50)
	{
		printf("%d\n", low + rand() % (high - low));
		i++;
	}
}