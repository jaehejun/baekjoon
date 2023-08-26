#include <stdio.h>

int	main(void)
{
	int			L;
	int			index;
	char		str[51];
	long long	hash;
	
	index = 0;
	scanf("%d", &L);
	scanf("%s", str);
	hash = 0;
	while (--L >= 0)
	{
		hash = hash * 31 + (str[L] - 96);
		hash = hash % 1234567891;
	}
	printf("%lld", hash);
}