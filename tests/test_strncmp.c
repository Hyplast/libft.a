#include "../srcs/libft.h"
#include <stdio.h>
#include <unistd.h>

void	test_strncmp(void)
{
	printf("     TEST: FT_STRNCMP     \n");
	printf("TEST1: ft_strncmp(\"lorem, lorem, 5\") = %i ", ft_strncmp("lorem", "lorem", 5));
	printf("|| strncmp(\"lorem, lorem, 5\") = %i \n", strncmp("lorem", "lorem", 5));
	printf(" TEST2: ft_strncmp(\"lorem, loremO, 5\") = %i ", ft_strncmp("lorem", "loremO", 5));
	printf("|| strncmp(\"lorem, loremO, 5\") = %i \n", strncmp("lorem", "loremO", 5));
	printf("TEST3: ft_strncmp(\"solko, lorem 3, 5\") = %i ", ft_strncmp("solko", "lorem 3", 5));
	printf("|| strncmp(\"solko, lorem 3, 5\") = %i \n", strncmp("solko", "lorem 3", 5));
	printf(" TEST4: ft_strncmp(\"AVC,  , 5\") = %i ", ft_strncmp("AVC", " ", 5));
	printf("|| strncmp(\"AVC,  , 5\") = %i \n", strncmp("AVC", " ", 5));
	printf("TEST5: ft_strncmp(\"AVC, loremO, 1\") = %i ", ft_strncmp("AVC", "loremO", 1));
	printf("|| strncmp(\"AVC, loremO, 1\") = %i \n", strncmp("AVC", "loremO", 1));
	printf(" TEST6: ft_strncmp(\"solko, !lorem 3, 0\") = %i ", ft_strncmp("solko", "!lorem 3", 0));
	printf("|| strncmp(\"solko, !lorem 3, 0\") = %i \n", strncmp("solko", "!lorem 3", 0));
	printf(" TEST7: ft_strncmp(\"FGH, IJK, 3\") = %i ", ft_strncmp("FGH", "IJk", 3));
	printf("|| strncmp(\"FGH, IJK, 3\") = %i \n", strncmp("FGH", "IJK", 3));
}

