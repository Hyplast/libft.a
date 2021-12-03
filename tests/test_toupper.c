#include <stdio.h>
#include "../srcs/libft.h"

void	test_toupper(void)
{
	printf("          TEST FT_toupper \n");
	printf(" TEST1 - ft_toupper(\'f\') : %d\n", ft_toupper('f'));
	printf("  TEST2 - ft_toupper(\'L\') : %d\n", ft_toupper('L'));
}
