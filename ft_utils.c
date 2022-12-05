#include "ft_printf.h"

char	*ft_zero(void)
{
	char	*rtn;

	rtn = (char *)malloc(2);
	if (!rtn)
		return (0);
	rtn[0] = '0';
	rtn[1] = 0;
	return (rtn);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
