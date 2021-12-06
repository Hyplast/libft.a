#include "../srcs/libft.h"
#include <stdio.h>
#include <unistd.h>

void	test_memchr(void)
{
	char str1[] = "1234_abcd";
	printf("     TEST: FT_MEMCHR     \n");
	printf("TEST1: ft_memchr(\"abcd_1234\", \'d\', 9) = %s | memchr(\"abcd_1234\", \'d\', 9) = %s\n", ft_memchr("abcd_1234", 'd', 9), memchr("abcd_1234", 'd', 9));
	printf("TEST2: ft_memchr(\"abcd_1234\", \'d\' + 0x100, 9) = %s | memchr(\"abcd_1234\", \'d\' + 0x100, 9) = %s\n", ft_memchr("abcd_1234", 'd'+ 0x100, 9), memchr("abcd_1234",'d' + 0x100, 9));

}

