/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:08:25 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/10 22:08:01 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	c;

	i = 0;
	while (((unsigned char)s[i] != '\0') && (i < n))
	{
		(unsigned char *)s[i] = 0;
		i++;
	}
}

int	main(void)
{
	char	s[10] = "Hello World";
	ft_bzero(s, 5);
	printf ("%s\n", s);
	return (0);
}
