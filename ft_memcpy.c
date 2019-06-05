/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:49:11 by lramela           #+#    #+#             */
/*   Updated: 2019/06/05 08:23:57 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src , size_t n)
{
	size_t 			i;
	unsigned char 	*tmp;
	char			*tmp2;

	i = 0;
	tmp = (unsigned char *)src;
	tmp2 = (char *)dst;
	while (tmp[i] != '\0' && i < n)
	{
		tmp2[i] = tmp[i];
		i++;
	}
	tmp2[i] = '\0';
	return (tmp2);
}
