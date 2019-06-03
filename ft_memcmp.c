/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:03:14 by lramela           #+#    #+#             */
/*   Updated: 2019/06/03 15:28:55 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if ((unsigned char)s1 != (unsigned char)s2)
			return ((unsigned char )s1 - (unsigned char)s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
