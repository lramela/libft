/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 09:23:04 by lramela           #+#    #+#             */
/*   Updated: 2019/06/17 10:08:22 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s,void(*f)(char *))
{
	unsigned int index;

	index = 0;
	if (!s)
		return ;
	while (s[index] != '\0')
	{
		f(s + index);
		index++;
	}
}
