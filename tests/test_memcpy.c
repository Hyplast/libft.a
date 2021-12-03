#include "../srcs/libft.h"
#include <stdio.h>

void	test_memcpy(void)
{
	char *string;
	char *ftstring;

	string = ft_memalloc(8);
	ftstring = ft_memalloc(8);
	
	string[0] = 'a';
	memcpy(string,ftstring, 4);
	ft_memcpy(ftstring,ftstring, 4);
	printf("   TEST; ft_memcpy   \n");
	printf("TEST 1: "); 
	printf("memcpy: %s || ft_memcpy: %s\n", string, ftstring);
	printf("TEST 2: ");
	printf("memcpy(((void*)0), ((void*)0), 3);");

	memcpy(((void*)0), ((void*)0), 3);

	printf(" || memcpy(((void*)0), ((void*)0), 3); \n");

	ft_memcpy(((void*)0), ((void*)0), 3);
}
