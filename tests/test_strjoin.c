#include "../srcs/libft.h"
#include <stdio.h>
#include <unistd.h>

void	test_strjoin(void)
{
	char	*str = "where is my ";
	char	*str2 = "malloc ???";
	char	*str3 = "!";

	printf("     TEST: ft_strjoin\n");
	printf("TEST1, ft_strjoin(\"where is my \", \"malloc ???\")");
	char *str_res = ft_strjoin(str, str2);
	printf(" = %s\n", str_res);
//	printf("TEST2, ft_strjoin(\"test,skill,dsf,yebaliu\", \"2,\" )");
//	str = ft_strjoin("test,skill,dsf,yebaliu", "2,");
	

}
