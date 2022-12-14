/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:22:20 by yoonsele          #+#    #+#             */
/*   Updated: 2022/12/13 16:57:08 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *str);
char	*ft_zero(void);
char	*ft_reverse(char *str);
int		ft_find_digit(unsigned int n);
char	*ft_utoa(unsigned int n);
int		ft_printf_c(va_list ap);
int		ft_printf_s(va_list ap);
int		ft_printf_di(va_list ap);
int		ft_printf_p(va_list ap);
int		ft_printf_u(va_list ap);
int		ft_printf_x(va_list ap);
int		ft_printf_xx(va_list ap);

#endif
