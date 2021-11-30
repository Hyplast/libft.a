#include "../srcs/libft.h"
#include <stdio.h>
#include <unistd.h>

void	test_strnstr(void)
{
	char *str;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;
	char *str7;
	char *str8;
	char *str9;
	char *str10;
	char *str11;
	
	printf("TEST1: ");
	if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15)))
		printf("NULL");
	else
		printf(str);
	printf(" :received - expected: NULL \n TEST2: ");
	if (!(str2 = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15)))
			printf("NULL");
		else
			printf(str2);
		printf(" :received - expected: lorem ipsum dolor sit amet \n TEST3: ");
if (!(str3 = ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15)))
			printf("NULL");
		else
			printf(str3);
		printf(" :received - expected: ipsum dolor sit amet \n TEST4: ");
if (!(str4 = ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35)))
			printf("NULL");
		else
			printf(str4);
		printf(" :received - expected: ipsum dolor sit lorem ipsum dolor \n TEST5: ");
if (!(str5 = ft_strnstr("lorem ipsum dolor sit amet", "", 10)))
			printf("NULL");
		else
			printf(str5);
		printf(" :received - expected: lorem ipsum dolor sit amet \n TEST6: ");
if (!(str6 = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30)))
			printf("NULL");
		else
			printf(str6);
		printf(" :reveiced - expected: NULL \n TEST7: ");
if (!(str7 = ft_strnstr("lorem ipsum dolor sit amet", "dol", 30)))
			printf("NULL");
		else
			printf(str7);
		printf(" :reveived - expected: dolor sit amet \n TEST7: ");
if (!(str8 = ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30)))
			printf("NULL");
		else
			printf(str8);
		printf(" :received - expected: NULL \n TEST8: ");
if (!(str9 = ft_strnstr("lorem ipsum dolor sit amet", "sit", 10)))
			printf("NULL");
		else
			printf(str9);
		printf(" :received - expected: NULL \n TEST9: ");
if (!(str10 = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 10)))
			printf("NULL");
		else
			printf(str10);
		printf(" :received - expected: NULL \n TEST10: ");
if (!(str11 = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0)))
			printf("NULL");
		else
			printf(str11);
		printf(" :received - expected: NULL \n");

}

