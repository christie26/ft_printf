/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:41:39 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/20 18:45:06 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	find_digit(int n)
{
	int	cnt;

	if (n == 0)
		return (1);
	cnt = 0;
	if (n < 0)
		cnt++;
	while (n)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}

char	*ft_reverse(char *str)
{
	int		len;
	int		i;
	char	*res;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		res[i] = str[len - i - 1];
		i++;
	}
	res[i] = 0;
	return (res);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	char	tmp[12];
	
	i = 0;
	if (n == 0)
		tmp[i++] = '0';
	while (n != 0)
	{
		if (n < 0)
		{
			tmp[i++] = -(n % 10) + '0';
			if (n > -10)
				tmp[i++] = '-'; 
		}
		else
			tmp[i++] = (n % 10) + '0';
		n /= 10;
	}
	tmp[i] = 0;
//	printf("tmp:%s\n", tmp);
//	res = ft_reverse(tmp);
//	printf("res:%s\n", res);
	return (tmp);
}
/*
char	*ft_utoa(unsigned n)
{
	int		i;
	char	*res;
	char	tmp[12];
	
	i = 0;
	if (n == 0)
		tmp[i++] = '0';
	while (n != 0)
	{
		if (n < 0)
		{
			tmp[i++] = -(d % 10) + '0';
			if (d > -10)
				tmp[i++] = '-'; 
		}
		else
			tmp[i++] = (d % 10) + '0';
		d /= 10;
	}
	tmp[i] = 0;
	res = ft_reverse(tmp);
	
}*/
