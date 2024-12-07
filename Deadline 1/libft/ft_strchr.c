/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 01:23:21 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/07 20:31:17 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
/* 	unsigned int	i0;
	unsigned int	i1;
	char	*r;

	i0 = 0;
	i1 = 0; */
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char*)s);
		}
		*s++;
	}
	return ('\0');
}

int	main(void)
{
	char	s[12] = "Hello World";
	printf ("%c\n", ft_strchr(s, 'W'));
	return (0);
}
