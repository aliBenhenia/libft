/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:17:36 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/11 15:18:07 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dd ;
	unsigned char	*ss ;

	dd = (unsigned char *)dst;
	ss = (unsigned char *)src;
	if (ss != NULL && dd != NULL)
	{
		while (n)
		{
			*dd = *ss;
			dd++;
			ss++;
			n--;
		}
	}
	return (dd);
}
