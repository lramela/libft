/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:38:23 by lramela           #+#    #+#             */
/*   Updated: 2019/05/25 12:45:41 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>

int		ft_islower(int c);
int		ft_isupper(int c);
int 	ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isprint(int c);

size_t		ft_strlen(char *s);
char		*ft_strcpy(char *dst, const char *src);
char 		*ft_strncpy(char *dst, const char* src, size_t len);
char    	*ft_strdup(const char *s);

void		*ft_memset(void *b, int c, size_t len);
#endif
