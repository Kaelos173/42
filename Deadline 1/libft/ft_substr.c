/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:40:53 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/29 23:39:34 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (s_len - start < len)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
    char *s = "Hello, World!";
    char *res;

    res = ft_substr(s, 0, 4);
    printf("\"%s\" -> \"%s\"\n", s, res);
    free(res);

    res = ft_substr(s, 7, 5);
    printf("\"%s\" -> \"%s\"\n", s, res);
    free(res);

    res = ft_substr(s, 7, 20);
    printf("\"%s\" -> \"%s\"\n", s, res);
    free(res);

    res = ft_substr(s, 50, 10);
    printf("Caso 4: \"%s\" -> \"%s\"\n", s, res);
    free(res);

    res = ft_substr("", 0, 5);
    printf("Caso 5: \"%s\" -> \"%s\"\n", "", res);
    free(res);

    return 0;
} */
