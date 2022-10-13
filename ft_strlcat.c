/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:31:45 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/12 10:31:49 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_i;
	size_t	s_i;

	d_i = 0;
	s_i = 0;
	while (dst[d_i] && d_i < dstsize -1)
	{
		d_i++;
	}
	while (src[s_i] && (s_i + d_i) < dstsize - 1)
	{
		dst[d_i] = src[s_i];
		s_i++;
		d_i++;
	}
	dst[d_i] = '\0';
	return (d_i + ft_strlen(src));
}
