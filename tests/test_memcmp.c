#include "../srcs/libft.h"
#include <stdio.h>
#include <unistd.h>

void	test_memcmp(void)
{
	printf("     TEST: FT_MEMCMP     \n");
	printf("TEST1: ft_memcmp(\"lorem, lorem, 5\") = %i ", ft_memcmp("lorem", "lorem", 5));
	printf("|| memcmp(\"lorem, lorem, 5\") = %i \n", memcmp("lorem", "lorem", 5));
	printf(" TEST2: ft_memcmp(\"lorem, loremO, 5\") = %i ", ft_memcmp("lorem", "loremO", 5));
	printf("|| memcmp(\"lorem, loremO, 5\") = %i \n", memcmp("lorem", "loremO", 5));
	printf("TEST3: ft_memcmp(\"solko, lorem 3, 5\") = %i ", ft_memcmp("solko", "lorem 3", 5));
	printf("|| memcmp(\"solko, lorem 3, 5\") = %i \n", memcmp("solko", "lorem 3", 5));
	printf(" TEST4: ft_memcmp(\"AVC,  , 5\") = %i ", ft_memcmp("AVC", " ", 5));
	printf("|| memcmp(\"AVC,  , 5\") = %i \n", memcmp("AVC", " ", 5));
	printf("TEST5: ft_memcmp(\"AVC, loremO, 1\") = %i ", ft_memcmp("AVC", "loremO", 1));
	printf("|| memcmp(\"AVC, loremO, 1\") = %i \n", memcmp("AVC", "loremO", 1));
	printf(" TEST6: ft_memcmp(\"solko, !lorem 3, 0\") = %i ", ft_memcmp("solko", "!lorem 3", 0));
	printf("|| memcmp(\"solko, !lorem 3, 0\") = %i \n", memcmp("solko", "!lorem 3", 0));
}

