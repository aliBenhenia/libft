/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:27:14 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/10 12:27:33 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*p;

	p = NULL;
	len = ft_strlen(s) - 1;
	if (c == '\0')
	{
		return ("");
	}
	while (len)
	{
		if (s[len] == c)
		{
			p = (char *) s + len;
			break ;
		}
		len--;
	}
	return (p);
}
