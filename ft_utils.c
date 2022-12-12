/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:36:26 by yoonsele          #+#    #+#             */
/*   Updated: 2022/12/04 17:25:44 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
