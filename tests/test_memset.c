#include "../srcs/libft.h"
#include <stdio.h>

void	test_memset(void)
{
	void *memarea;

	memarea = ft_memalloc(8);

	printf("memset: %p; ft_memset: %p;\n", memset(memarea ,60, 4), ft_memset(memarea ,60, 4));
}
