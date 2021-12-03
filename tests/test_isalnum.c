#include <stdio.h>
#include "../srcs/libft.h"

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

void	test_isalnum(void)
{
	printf("          TEST FT_isalnum \n");
	printf(" TEST1 - ft_isalnum(\'c\') : %i || isalnum(c) = %i\n", ft_isalnum('c'), isalnum('c'));
	printf("  TEST2 - ft_isalnum(124) : %i || isalnum(124) = %i\n", ft_isalnum(124), isalnum(124));
	printf("  TEST3 - ft_isalnum(-1) : %i || isalnum(-1)  = %i\n", ft_isalnum(-1), isalnum(-1));

	int i = -1;
	
	printf("TEST4: ft_isalnum (-1 -> 529)");
	while (i < 520)
	{
		if(ft_isalnum(i) != 0)
		{
			printf("| %i", i);
		}
		i++;
	}
	printf("\nsame for alnum(-1->530)");
	i = -1;
	while (i < 530)
	{
		if(isalnum(i) != 0)
		{
			printf("| %i -", i);
			ft_putchr(i);
		}
		i++;
	}
	//printf(" || test OK. \n");

}
