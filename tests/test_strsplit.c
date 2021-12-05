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
	
	char *s = "split  ||this|for|me|||||!|";
	char **result = ft_strsplit(s, '|');
	printf("TEST3, ft_strsplit(\"split  ||this|for|me|||||!|\", \"|\" )");
	printf("- 1: %s 2: %s 3: %s 4: %s 5: %s\n", result[0], result[1], result[2], result[3], result[4]);
	free(result);

	char *s2 = "      split       this for   me  !       ";
	char **result2 = ft_strsplit(s2, ' ');
	printf("TEST4, ft_strsplit(\"      split       this for   me  !      \", \" \" )");
	printf("- 1: %s 2: %s 3: %s 4: %s 5: %s\n", result2[0], result2[1], result2[2], result2[3], result2[4]);
	printf("result2[4][0] = '%i' and result2[4][1] = '%i'\n", result2[4][0], result2[4][1]);
	free(result2);
}
