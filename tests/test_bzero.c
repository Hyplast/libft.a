#include "../srcs/libft.h"
#include <stdio.h>

void	test_bzero(void)
{
	void *memarea;
	void *ftmemarea;

	memarea = ft_memalloc(8);
	ftmemarea = ft_memalloc(8);
	bzero(memarea, 4);
	ft_bzero(ftmemarea, 4);
	printf("bzero: %p; ft_bzero: %p;\n", memarea, ftmemarea);
}
