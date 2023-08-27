/*
첫째 줄에 자연수 N(1 ≤ N ≤ 100,000)이 주어진다.
다음 줄에는 N개의 정수로 이루어진 배열 A[1], A[2], ...A[N]이 주어진다.
다음 줄에는 M(1 ≤ M ≤ 100,000)이 주어진다.
다음 줄에는 M개의 수들이 주어진다.

배열 A[N]에 M개의 정수가 포함되어 있는지를 구하는 프로그램을 작성하시오.
정수는 INT_MIN ~ INT_MAX
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int		n;
	int		m;
	int		i;
	int		count;
	char	**map;

	scanf("%d%d", &n, &m);
	printf("%d, %d\n", n, m);
	map = (char **)malloc(sizeof(char *) * n);
	map[n - 1] = NULL;
	i = 0;
	while (i < n)
	{
		map[i] = (char *)malloc(sizeof(char) * m + 1);
		scanf("%s", map[i]);
		map[i][m] = '\0';
		i++;
	}
	printf("%d", count);
	return (0);
}

circular_queue;



//0,0 -> n-1, m-1
x, y = 0, 0
check (x, y) == 1 -> valid
enqueue (x, y) (0, 0)
dequeue (x, y) (0, 0)
visit 0, 0, turn visited 1 -> 0
check (x, y - 1), (x + 1, y), (x, y + 1), (x - 1, y) // up, right, down, left == 0 -> return, == 1 -> enqueue
enqueue (x, y - 1), (x + 1, y), (x, y + 1), (x - 1, y) if (valid)
dequeue
visit



void	enqueue(int x, int y)
{

}