#include "../srcs/libft.h"
#include <stdio.h>
#include <unistd.h>

void	test_strjoin(void)
{
	char	**str = "hello";
	char	*str2 = "world";
	char	*str3 = "!";

	printf("     TEST: ft_strjoin\n");
	printf("TEST1, ft_strjoin(\".test..skill..dsf.yebaliu.\", \".2\" )");
	str = ft_strjoin(".test..skill..dsf.yebaliu.", ".2");
	printf("TEST2, ft_strjoin(\"test,skill,dsf,yebaliu\", \"2,\" )");
	str = ft_strjoin("test,skill,dsf,yebaliu", "2,");
	

}
