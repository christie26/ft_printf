/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:36:26 by yoonsele          #+#    #+#             */
/*   Updated: 2022/12/04 17:25:44 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf_c(va_list ap)
{
	char	c;

	c = (char)va_arg(ap, int);
	return (write(1, &c, 1));
}

int	ft_printf_s(va_list ap)
{
	char	*s;
	int		res;

	s = va_arg(ap, char *);
	return (write(1, s, ft_strlen(s)));
}

char	*ft_reverse(char *str)
{
	int		len;
	int		i;
	char	*res;

	len = ft_strlen(str);
	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	i = 0;
	while (i < len)
	{
		res[i] = str[len - i - 1];
		i++;
	}
	res[i] = 0;
	return (res);
}

int	ft_printf_di(va_list ap)
{
	int		d;
	int		i;
	char	*res;
	char	tmp[12];

	d = va_arg(ap, int);
	if (d == 0)
		res = ft_zero();
	else
	{
		i = 0;
		while (d != 0)
		{
			tmp[i++] = ft_abs(d % 10) + '0';
			if (d > -10 && d < 0)
				tmp[i++] = '-';
			d /= 10;
		}
		tmp[i] = 0;
		res = ft_reverse(tmp);
	}	
	if (!res)
		return (-1);
	return (write(1, res, ft_strlen(res)));
}

int	ft_printf_u(va_list ap)
{
	unsigned int	u;
	int				i;
	char			*res;
	char			tmp[12];

	u = va_arg(ap, int);
	if (u == 0)
		res = ft_zero();
	else
	{
		i = 0;
		while (u != 0)
		{
			tmp[i++] = (u % 10) + '0';
			u /= 10;
		}
		tmp[i] = 0;
		res = ft_reverse(tmp);
	}	
	if (!res)
		return (-1);
	return (write(1, res, ft_strlen(res)));
}
