#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	a;
	int	b;

	printf("\n1. string without format\n");
	a = printf("happy\n");
	b = ft_printf("happy\n");
	printf("return value:%d, %d\n", a, b);

	printf("\n2. format of c\n");
	a = printf("%c %c %c\n", 'a', 0, 35);
	b = ft_printf("%c %c %c\n", 'a', 0, 35);
	printf("return value:%d, %d\n", a, b);
	
	printf("\n3. format of s\n");
	a = printf("%%s:%s%s\n", 0, "happy");
	b = ft_printf("%%s:%s%s\n", 0, "happy");
	printf("return value:%d, %d\n", a, b);

	printf("\n3. format of d & i\n");
	a = printf("%d %d %d\n", -2147483648, 2147483647, 0);
	b = ft_printf("%d %d %d\n", -2147483648, 2147483647, 0);
	printf("return value:%d, %d\n", a, b);
	a = printf("%i %i %i\n", -2147483648, 2147483647, 0);
	b = ft_printf("%i %i %i\n", -2147483648, 2147483647, 0);
	printf("return value:%d, %d\n", a, b);

	printf("\n4. format of u\n");
	a = printf("%u %u %u\n", 0, 2147483648, 4294967295);	
	b = ft_printf("%u %u %u\n", 0, 2147483648, 4294967295);	
	printf("return value:%d, %d\n", a, b);

	printf("\n5. format of p\n");
	a = ft_printf("%p\n", 0);
	b = printf("%p\n", 0);
	printf("return value:%d, %d\n", a, b);
	
	a = ft_printf("%p\n", (void *)-14523);
	b = printf("%p\n", (void *)-14523);
	printf("return value:%d, %d\n", a, b);
	
	a = ft_printf("%p\n", (void *)-1);
	b = printf("%p\n", (void *)-1);
	printf("return value:%d, %d\n", a, b);
	
	a = ft_printf("%p\n", (void *)14523);
	b = printf("%p\n", (void *)14523);
	printf("return value:%d, %d\n", a, b);
	
	a = ft_printf("%p\n", (void *)523);
	b = printf("%p\n", (void *)523);
	printf("return value:%d, %d\n", a, b);

	printf("\n6. format of x\n");
	a = printf("%x\n",-486);
	b = ft_printf("%x\n",-486);
	printf("return value:%d, %d\n", a, b);

	a = printf("%x\n",486);
	b = ft_printf("%x\n",486);
	printf("return value:%d, %d\n", a, b);
	
	a = printf("%x\n",LONG_MIN);
	b = ft_printf("%x\n",LONG_MIN);
	printf("return value:%d, %d\n", a, b);

	printf("\n7. mix everything\n");
	a = printf("%c %s %d %i %u %p %x %X %%\n", 'a', "bb", 12, -34, 567890123, (void *)123, 456, 789);
	b = ft_printf("%c %s %d %i %u %p %x %X %%\n", 'a', "bb", 12, -34, 567890123, (void *)123, 456, 789);
	printf("return value:%d, %d\n", a, b);

	return (0);
}
