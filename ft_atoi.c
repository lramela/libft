/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:33:30 by lramela           #+#    #+#             */
/*   Updated: 2019/06/10 14:41:04 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int sign;
	int tmp;

	sign = 1;
	tmp = 0;
	while (*str == '\t' || *str == '\v' || *str == '\n' || \
			*str == '\r' || *str == '\f' || *str == ' ')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		tmp = tmp * 10 + *str - '0';
		str++;
	}
	return (tmp * sign);
}
