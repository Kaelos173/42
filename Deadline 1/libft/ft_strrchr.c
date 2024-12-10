/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:20:51 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/10 19:31:14 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while (*s != '\0')
	{
		s++;
	}
	while (*s - 1 != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s--;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char	s[12] = "Hello World";
	printf ("%s\n", ft_strrchr(s, 'C'));
	return (0);
} */