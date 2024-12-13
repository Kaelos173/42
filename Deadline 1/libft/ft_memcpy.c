/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:14:11 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/11 20:55:38 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*str;
	unsigned char	*strc;

	i = 0;
	str = (unsigned char *)src;
	while ((str[i] != '\0') && (i < n))
	{
		strc[i] = str[i];
		i++;
	}
	src = strc;
}

int	main(void)
{
	char	s1[12] = "Hello World";
	char	dest1[50];
	ft_memcpy(0, s1, 5);
	printf ("%s\n", dest1);

	char	s2[12] = "Hello World";
	char	dest2[50];
	ft_memcpy(0, s2, 5);
	printf ("%s\n", dest2);
	return (0);
}
