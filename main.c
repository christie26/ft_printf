#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	a;
	int	b;

//	printf("\n1. string without format\n");
//	a = printf("happy\n");
//	b = ft_printf("happy\n");
//	printf("return value of two functions: %d, %d\n", a, b);

//	printf("\n2. format of c & s\n");
//	a = printf("character:%c|string:%s\n", 'a', "happy");
//	b = ft_printf("character:%c|string:%s\n", 'a', "happy");
//	printf("return value:%d, %d\n", a, b);

//	printf("\n3. format of d & i\n");
//	a = printf("%d %d %d\n", -2147483648, 2147483647, 0);
//	b = ft_printf("%d %d %d\n", -2147483648, 2147483647, 0);
//	printf("return value:%d, %d\n", a, b);
//	a = printf("%i %i %i\n", -2147483648, 2147483647, 0);
//	b = ft_printf("%i %i %i\n", -2147483648, 2147483647, 0);
//	printf("return value:%d, %d\n", a, b);

//	printf("\n4. format of u\n");
//	a = printf("%u %u %u\n", 0, 2147483648, 4294967295);	
//	b = ft_printf("%u %u %u\n", 0, 2147483648, 4294967295);	
//	printf("return value:%d, %d\n", a, b);

//	unsigned int num = 486;
//	printf("\n5. format of p\n");
//	a = printf("%p\n",&num);
//	b = ft_printf("%p\n",&num);
//	printf("return value:%d, %d\n", a, b);

	a = printf("%x\n",LONG_MAX);
	b = ft_printf("%x\n",LONG_MAX);
	printf("return value:%d, %d\n", a, b);
		
	a = printf("%x\n",LONG_MIN);
	b = ft_printf("%x\n",LONG_MIN);
	printf("return value:%d, %d\n", a, b);
	
	return (0);
}
