/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:54:53 by lramela           #+#    #+#             */
/*   Updated: 2019/06/04 15:01:50 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t l;
	size_t len;

	i = 0;
	l = ft_strlen(dst);
	len = ft_strlen(src) + l;
	if (dstsize < l)
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
