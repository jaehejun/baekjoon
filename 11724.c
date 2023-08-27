/*
문제
방향 없는 그래프가 주어졌을 때, 연결 요소 (Connected Component)의 개수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 정점의 개수 N과 간선의 개수 M이 주어진다. (1 ≤ N ≤ 1,000, 0 ≤ M ≤ N×(N-1)/2) 둘째 줄부터 M개의 줄에 간선의 양 끝점 u와 v가 주어진다. (1 ≤ u, v ≤ N, u ≠ v) 같은 간선은 한 번만 주어진다.

출력
첫째 줄에 연결 요소의 개수를 출력한다.

예제 입력 1 
6 5
1 2
2 5
5 1
3 4
4 6
예제 출력 1 
2

예제 입력 2 
6 8
1 2
2 5
5 1
3 4
4 6
5 4
2 4
2 3
예제 출력 2 
1
*/

#include <stdio.h>

int	main(void)
{
	int	n;
	int	m;
	int	i;
	int	j;
	int	k;
	int	adj[1001][1001];
	int	visited[1001];
	int	queue[1001];
	int	front;
	int	rear;
	int	cnt;

	scanf("%d %d", &n, &m);
	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < n)
			adj[i][j] = 0;
	}
	i = -1;
	while (++i < m)
	{
		scanf("%d %d", &j, &k);
		adj[j - 1][k - 1] = 1;
		adj[k - 1][j - 1] = 1;
	}
	i = -1;
	while (++i < n)
		visited[i] = 0;
	cnt = 0;
	i = -1;
	while (++i < n)
	{
		if (visited[i] == 0)
		{
			queue[0] = i;
			visited[i] = 1;
			front = -1;
			rear = 0;
			while (front < rear)
			{
				j = queue[++front];
				k = -1;
				while (++k < n)
				{
					if (adj[j][k] == 1 && visited[k] == 0)
					{
						queue[++rear] = k;
						visited[k] = 1;
					}
				}
			}
			cnt++;
		}
	}
	printf("%d", cnt);
	
	return (0);
}