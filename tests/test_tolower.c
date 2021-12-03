#include <stdio.h>
#include "../srcs/libft.h"

void	test_tolower(void)
{
	printf("          TEST FT_tolower \n");
	printf(" TEST1 - ft_toupper(\'f\') : %d\n", ft_tolower('f'));
	printf("  TEST2 - ft_toupper(\'L\') : %d\n", ft_tolower('L'));
}
