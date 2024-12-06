/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:32:07 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/05 21:49:29 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	l;

	l = 0;
	while (src[l] != '\0' && l <= dstsize)
	{
		dst[l] = src[l];
		l++;
	}
	dst[l] = '\0';
	l--;
	return (l);
}

/* int	main(void)
{
	char	dst[50] = "test";
	
	printf("%zu\n", ft_strlcpy(dst, "Hello World", 8));
	return (0);
} */