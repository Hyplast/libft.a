#include "../srcs/libft.h"
#include <stdio.h>

void	test_memmove(void)
{
	//char *string;
	//char *ftstring;

	//string = ft_memalloc(8);
	//ftstring = ft_memalloc(8);
	
	//string[0] = 'a';
	//memcpy(string,ftstring, 4);
	//ft_memcpy(ftstring,ftstring, 4);
	printf("   TEST; ft_memmove   \n");
	printf("TEST 1: "); 
	//printf("memccpy: %s || ft_memccpy: %s\n", string, ftstring);
		//printf("memccpy(((void*)0), ((void*)0), 3);");

	//memccpy(((void*)0), ((void*)0), 3);

	//printf(" || memcpy(((void*)0), ((void*)0), 3); \n");

	//ft_memccpy(((void*)0), ((void*)0), 3);
	
	char buff1[] = "abcdefghijklmnopqrstuvwxyz";
	char buff2[] = "abcdefghijklmnopqrstuvwxyz";
	char *src = "string with\200inside !";

	memmove(buff1, src, 21);
	ft_memmove(buff2, src, 21);
	printf ("memmove(buff1, src, 21) = %s ||  ft_memmove(buff2, src, 21); = %s" , buff1, buff2);
	printf("\nTEST 2: ft_memmove( buff1, (void*)0, 3);\n");
	ft_memmove( buff1, (void*)0, 3);
	printf("TEST 3: \n");
	char b[0xF0];

	ft_memmove(b, ((void*)0), 5);
	
}
