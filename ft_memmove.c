/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:56:42 by lramela           #+#    #+#             */
/*   Updated: 2019/06/05 14:43:49 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char tmp[len];

	if (dst == src)
		return ((char *)src);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, temp, len);
	return (dst);
}
