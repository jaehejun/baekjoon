#include <stdio.h>

int	ft_atoi_base(char *nbr, int base)
{
	int		num;
	int		i;
	int		j;
	int		flag;

	char base1[] = "0123456789ABCDEF";
	char base2[] = "0123456789abcdef";
	num = 0;
	i = 0;
	j = 0;
	flag = 1;
	if (base < 2 || base > 16)
		return (0);
	if (nbr[i] == '-')
	{
		flag = -1;
		i++;
	}
	while (nbr[i] != '\0' && j < base)
	{
		if (nbr[i] == base1[j] || nbr[i] == base2[j])
		{
			num = num * base + j;
			i++;
			j = 0;
		}
		else
			j++;
	}
	num = num * flag;
	return (num);
}

int	main(void)
{
	char	*nbr;

	nbr = "-210-101010";
	printf("%d", ft_atoi_base(nbr, 2));
	return (0);
}