/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:07:36 by lramela           #+#    #+#             */
/*   Updated: 2019/06/11 13:11:04 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char	*str;
	char	*ptr;
/*	ft_putnbr(6);*/
/*	char src[] = "Wethinkcode";
	char dest[100];*/


/*	char dst[100];
	char src[100];
	char *ptr;
	ft_strcpy(dst,"string1");
	ft_strcpy(src, "string2");
	ptr = ft_strstr(dst, src);
	printf("%s\n",ptr);*/
/*	printf("ft_memcmp -> %d\n", memcmp("lesego", "lesego", 6));*/
/*	ft_memcpy(dest, src, ft_strlen(src) + 1);
	printf("ft_memcpy -> %s\n", dest);*/
	str = ft_strnew(10);
	ft_strcpy(str, "    Hello!!!    ");
	printf("%s\n", str);
	ptr = ft_strtrim(str);
	printf("%s\n", ptr);
	return (0);
}
