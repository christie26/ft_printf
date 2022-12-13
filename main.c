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
//	a = printf("character:%c\n", 'a');
//	b = ft_printf("character:%c\n", 'a');
//	printf("return value:%d, %d\n", a, b);
	
//	char *string;
//	string = 0; // why it's wrong? 
//	a = printf("string:%s\n", string);
//	b = ft_printf("string:%s\n", string);
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
//	a = printf("%p\n", (void *)-14523);
	a = ft_printf("%p\n", 0);
	b = printf("%p\n", 0);
	printf("return value:%d, %d\n", a, b);
	
//	a = ft_printf("%p\n", (void *)-14523);
//	b = printf("%p\n", (void *)-14523);
//	printf("return value:%d, %d\n", a, b);
//	a = ft_printf("%p\n", (void *)-1);
//	b = printf("%p\n", (void *)-1);
//	printf("return value:%d, %d\n", a, b);
//	a = ft_printf("%p\n", (void *)14523);
//	b = printf("%p\n", (void *)14523);
//	printf("return value:%d, %d\n", a, b);
//	a = ft_printf("%p\n", (void *)4523);
//	b = printf("%p\n", (void *)4523);
//	printf("return value:%d, %d\n", a, b);
//	a = ft_printf("%p\n", (void *)523);
//	b = printf("%p\n", (void *)523);
//	printf("return value:%d, %d\n", a, b);

	a = printf("%x\n",-486);
	b = ft_printf("%x\n",-486);
	printf("return value:%d, %d\n", a, b);
		
//	a = printf("%x\n",LONG_MIN);
//	b = ft_printf("%x\n",LONG_MIN);
//	printf("return value:%d, %d\n", a, b);
	
	return (0);
}
