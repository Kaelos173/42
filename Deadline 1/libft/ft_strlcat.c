/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:50:05 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/06 01:06:35 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <stddef.h> */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (dst[l] != '\0')
		l++;
	while ((src[i] != '\0') && (i < dstsize))
	{
		dst[l] = src[i];
		i++;
		l++;
	}
	dst[l] = '\0';
	return (l);
}

/*int	main(void)
{
	char	dst[50] = "Hello ";
	const char	src[] = "World";

	printf("%zu\n", ft_strlcat(dst, src, 2)); 
	return (0);
}*/