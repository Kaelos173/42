/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:37:47 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/10 20:26:25 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return (*haystack);
	while (*haystack != '\0')
	{
		while (*haystack == *needle)
		{
			return (*haystack);
			needle++;
		}
		haystack++;
	}
	return (NULL);
}

int	main(void)
{
	char	haystack[12] = "Hello World";
	char	needle[4] = "Wor";
	printf ("%s\n", ft_strnstr(haystack, needle, 7));
	return (0);
}