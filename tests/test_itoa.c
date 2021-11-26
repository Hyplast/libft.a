#include <stdio.h>
#include "../srcs/libft.h"

void	test_itoa(void)
{
	printf("          TEST FT_ITOA: \n");
	printf(" TEST1 - ft_itoa(0) : %s\n", ft_itoa(0));
	printf("  TEST2 - ft_itoa(6) : %s\n", ft_itoa(6));
	printf(" TEST3 - ft_itoa(-6) : %s\n", ft_itoa(-6));
	printf("  TEST4 - ft_itoa(16) : %s\n", ft_itoa(16));
	printf(" TEST5 - ft_itoa(-16) : %s\n", ft_itoa(-16));
	printf("  TEST6 - ft_itoa(-2147483648) : %s\n", ft_itoa(-2147483648));
	printf(" TEST7 - ft_itoa(2147483647) : %s\n", ft_itoa(2147483647));
}
