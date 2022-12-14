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

int	ft_format(const char **format, va_list ap)
{
	(*format)++;
	if (**format == 'c')
		return (ft_printf_c(ap));
	else if (**format == 's')
		return (ft_printf_s(ap));
	else if (**format == 'd' || **format == 'i')
		return (ft_printf_di(ap));
	else if (**format == 'u')
		return (ft_printf_u(ap));
	else if (**format == 'p')
		return (ft_printf_p(ap));
	else if (**format == 'x')
		return (ft_printf_x(ap));
	else if (**format == 'X')
		return (ft_printf_xx(ap));
	else if (**format == '%')
		return (write(1, &"%", 1));
	else
		return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		tmp;

	va_start (ap, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
			tmp = ft_format(&format, ap);
		else
			tmp = write(1, format, 1);
		if (tmp == -1)
			return (-1);
		len += tmp;
		format++;
	}
	va_end(ap);
	return (len);
}
