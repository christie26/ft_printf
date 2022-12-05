/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:34:59 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/20 18:43:40 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

//	if (size && count > SIZE_MAX / size)
//		size = 0;
	res = (void *)malloc(count * size);
	if (!res)
		return (0);
	res = ft_bzero(res, count * size);
	return (res);
}
