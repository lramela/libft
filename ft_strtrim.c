/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 07:31:07 by lramela           #+#    #+#             */
/*   Updated: 2019/06/12 09:05:00 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t len;
	size_t end;
	size_t start;

	len = 0;
	end = 0;
	start = 0;
	if (s)
	{
		len = ft_strlen(s)
	}
	while (s && *(s + start) && (*(start) == '_' || *(s + start_ == '\n'\ || *(start) == '\t')))
	{
		start++;
	}
	while (s && end < len && (*(s + len - 1 - end) == '_' || *(s + len - 1 - end ) == '\n'|| *(s + len - 1 - end) == '\t'))
	{
		end++;
	}
	if ((int)(len - end - start) < 0)
	{
		return(ft_strsub(s, start, 0));
	}
	return (ft_strsub(s, start, len - end - start));
}
