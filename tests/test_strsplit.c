#include "../srcs/libft.h"
#include <stdio.h>
#include <unistd.h>

void	test_strsplit(void)
{
	char	**str;
	char	*str2;
	char	*str3;

	printf("     TEST: strsplit\n");
	printf("TEST1, ft_strsplit(\".test..skill..dsf.yebaliu.\", \".\" )");
	str = ft_strsplit(".test..skill..dsf.yebaliu.", '.');
	printf("- 1: %s 2: %s 3: %s 4: %s\n", str[0], str[1], str[2], str[3]);
	printf("TEST2, ft_strsplit(\"test,skill,dsf,yebaliu\", \",\" )");
	str = ft_strsplit("test,skill,dsf,yebaliu", ',');
	printf("- 1: %s 2: %s 3: %s 4: %s\n", str[0], str[1], str[2], str[3]);
	

}
