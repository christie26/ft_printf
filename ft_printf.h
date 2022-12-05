/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:22:20 by yoonsele          #+#    #+#             */
/*   Updated: 2022/12/04 17:25:21 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *format, ...);
size_t ft_strlen(const char *str);
char *ft_zero(void);
int	ft_abs(int n);
int	ft_printf_c(va_list ap);
int	ft_printf_s(va_list ap);
int	ft_printf_di(va_list ap);
int	ft_printf_p(va_list ap);
int	ft_printf_u(va_list ap);
int	ft_printf_x(va_list ap);
int	ft_printf_xx(va_list ap);

#endif
