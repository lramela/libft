/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:03:05 by lramela           #+#    #+#             */
/*   Updated: 2019/06/18 14:09:15 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
    if (n == 0)
        return (0);
    if (s1 == NULL || s2 == NULL)
        return (0);
    if (ft_strncmp(s1, s2, n) != 0)
		return (0);
	else
		return (1);
}
