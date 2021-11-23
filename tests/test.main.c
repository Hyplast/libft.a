#include <stdio.h>
#include "../srcs/libft.h"

void	test_memset(void);
void	test_bzero(void);
void	test_memcpy(void);
void	test_strnstr(void);
void	test_atoi(void);
void	test_strsplit(void);
	
int	main(void)
{
	test_atoi();
	test_memset();
	test_bzero();
	test_memcpy();
	test_strnstr();
	test_strsplit();
/*test_memccpy();
	test_memmove();
	test_memchr();
	test_memcmp();
	test_strlen();
	test_strdup();
	test_strcpy();
	test_strcat();
	test_strncat();
	test_strlcat();
	test_strchr();
	test_strrchr();
	test_strstr();
		test_strcmp();
	test_strncmp();
		test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
*/
	return (0);
}
