/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:54:53 by lramela           #+#    #+#             */
/*   Updated: 2019/05/29 12:06:30 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t k;
	size_t l;
	size_t t;

	i = 0;
	l = ft_strlen(dst);
	len = ft_strlen(src);
	if (dstsize(src) + (dstsize))
			return(ft_strlen(src) + dstsize);
	while(src[i] && (dstsize > l + i))
	{
		dst[l] = src[i];
		i++;
		l++;
	}	
	dst[l] = '\0';
	return(len);
}
