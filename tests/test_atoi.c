#include "../srcs/libft.h" 
#include <stdlib.h>
#include <stdio.h>

void	test_atoi(void)
{
	printf("      TEST: ATOI\n");
	printf("TEST1: atoi(-422) : ");
	if (atoi("-422") == ft_atoi("-422"))
		printf(" PASS\n");
	else 
		printf(" FAIL: %i\n", atoi("-422"));
	printf("TEST2: ft_atoi(\"822\") = ");
	if (atoi("822") == ft_atoi("822"))
		printf(" PASS\n");
	else 
		printf(" FAIL: %i\n", ft_atoi("822"));


}
