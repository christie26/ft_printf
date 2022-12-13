/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:20:26 by yoonsele          #+#    #+#             */
/*   Updated: 2022/12/04 17:25:44 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, int *idx, va_list ap)
{
	(*idx)++;
	if (format[*idx] == 'c')
		return (ft_printf_c(ap));
	else if (format[*idx] == 's')
		return (ft_printf_s(ap));
	else if (format[*idx] == 'd' || format[*idx] == 'i')
		return (ft_printf_di(ap));
	else if (format[*idx] == 'u')
		return (ft_printf_u(ap));
	else if (format[*idx] == 'p')
		return (ft_printf_p(ap));
	else if (format[*idx] == 'x')
		return (ft_printf_x(ap));
	else if (format[*idx] == 'X')
		return (ft_printf_xx(ap));
	else if (format[*idx] == '%')
		return (write(1, &"%", 1));
	else
		return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		idx;
	int		len;
	int		tmp;

	va_start (ap, format);
	idx = 0;
	len = 0;
	while (format[idx])
	{
		if (format[idx] == '%')
			tmp = ft_format(format, &idx, ap);
		else
			tmp = write(1, &format[idx], 1);
		if (tmp == -1)
			return (-1);
		len += tmp;
		idx++;
	}
	va_end(ap);
	return (len);
}
