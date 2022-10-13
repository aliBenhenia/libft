/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:17:21 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/10 15:17:50 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	compare(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*p;
	size_t	i;

	i = 1;
	p = NULL;
	if (n == 0)
	{
		return (NULL);
	}
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack && i < n - 1)
	{
		if (*haystack == *needle && compare(haystack, needle))
		{
			p = (char *) haystack;
			return (p);
		}
		haystack++;
		i++;
	}
	return (p);
}
