/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:08:25 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/11 16:06:49 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*s1;

	i = 0;
	s1 = (char *)s;
	while ((s1[i] != '\0') && (i < n))
	{
		s1[i] = 0;
		i++;
	}
	s = s1;
}

/* int	main(void)
{
	char	s[12] = "Hello World";
	ft_bzero(s, 5);
	printf ("%s\n", s);

	char	s1[12] = "Hello World";
	bzero(s, 5);
	printf ("%s\n", s);
	return (0);
} */
