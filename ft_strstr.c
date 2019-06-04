/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:29:42 by lramela           #+#    #+#             */
/*   Updated: 2019/06/04 16:00:07 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)haystack);
	while(haystack[i] != '\0')
	{
		while (needle[j] == haystack[i + j])
		{
			if (j ==(len - i))
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
