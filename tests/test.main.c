#include <stdio.h>
#include "../srcs/libft.h"

void	test_memset(void);
void	test_bzero(void);
void	test_memcpy(void);
void	test_strnstr(void);
void	test_atoi(void);
void	test_strsplit(void);
void	test_itoa(void);
void	test_memcmp(void);
void	test_strncmp(void);
void	test_memccpy(void);
void	test_itoa(void);
void	test_strstr(void);
void	test_tolower(void);
void	test_toupper(void);
void	test_strjoin(void);
void	test_memmove(void);
void	test_isalnum(void);

int	main(void)
{
	test_atoi();
	test_memset();
	test_bzero();
	test_memcpy();
	test_strnstr();
	test_strsplit();
	test_itoa();
	test_memcmp();
	test_strncmp();
	test_memccpy();
	test_memmove();
	test_isalnum();
	test_toupper();
	test_tolower();
	test_strncmp();
	test_strjoin();
	test_strstr();
/*

	test_memchr();
	test_strlen();
	test_strdup();
	test_strcpy();
	test_strcat();
	test_strncat();
	test_strlcat();
	test_strchr();
	test_strrchr();
	test_strcmp();
	test_isalpha();
	test_isdigit();
	test_isascii();
	test_isprint();
*/
	return (0);
}
