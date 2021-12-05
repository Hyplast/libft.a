#include <stdio.h>
#include "../srcs/libft.h"

void	test_toupper(void)
{
	printf("          TEST FT_toupper \n");
	printf(" TEST1 - ft_toupper(\'f\') : %c\n", ft_toupper('f'));
	printf("  TEST2 - ft_toupper(\'L\') : %c\n", ft_toupper('L'));
	printf("TEST3: ft_toupper(-100) = '%i' and toupper(-100) = '%i'\n", ft_toupper(-100), toupper(-100));
}
