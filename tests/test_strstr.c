#include "../srcs/libft.h"
#include <stdio.h>
#include <unistd.h>

void	test_strstr(void)
{
	char *str;
	char *str2;
	char *str3;
	char *str4 = "AAAAAAAA";
	char *str5;
	char *str6;
	char *str7;
	char *str8;
	char *str9;
	char *str10;
	char *str11;
	
	printf("\nTEST1: ft_strstr\nTEST1:  ");
	if (!(str = ft_strstr("FF", "see FF your FF return FF now FF")))
		printf("NULL");
	else
		printf(str);
	printf(" :received - expected: NULL \n TEST2: ");
	if (!(str2 = ft_strstr("MZIRIBMZIRIBMZP", "MZIRIBMZP")))
			printf("NULL");
		else
			printf(str2);
		printf(" :received - expected: %s \n TEST3: ", strstr("MZIRIBMZIRIBMZP", "MZIRIBMZP"));
if (!(str3 = ft_strstr("", "")))
			printf("NULL");
		else
			printf(str3);
		printf(" :received - expected: %s\n TEST4: ", strstr("",""));
if (!(str4 = ft_strstr(str4, str4)))
			printf("NULL");
		else
			printf(str4);
		printf(" :received - expected: %s\n TEST5: ", strstr(str4,str4));
if (!(str5 = ft_strstr("lorem ipsum dolor sit amet", "")))
			printf("NULL");
		else
			printf(str5);
		printf(" :received - expected: lorem ipsum dolor sit amet \n TEST6: ");
if (!(str6 = ft_strstr("lorem ipsum dolor sit amet", "ipsumm")))
			printf("NULL");
		else
			printf(str6);
		printf(" :reveiced - expected: NULL \n TEST7: ");
if (!(str7 = ft_strstr("lorem ipsum dolor sit amet", "dol")))
			printf("NULL");
		else
			printf(str7);
		printf(" :reveived - expected: dolor sit amet \n TEST7: ");
if (!(str8 = ft_strstr("lorem ipsum dolor sit amet", "consectetur")))
			printf("NULL");
		else
			printf(str8);
		printf(" :received - expected: NULL \n TEST8: ");
if (!(str9 = ft_strstr("lorem ipsum dolor sit amet", "sit")))
			printf("NULL");
		else
			printf(str9);
		printf(" :received - expected: NULL \n TEST9: ");
if (!(str10 = ft_strstr("lorem ipsum dolor sit amet", "dolor")))
			printf("NULL");
		else
			printf(str10);
		printf(" :received - expected: NULL \n TEST10: ");
if (!(str11 = ft_strstr("lorem ipsum dolor sit amet", "dolor")))
			printf("NULL");
		else
			printf(str11);
		printf(" :received - expected: NULL \n");

}

