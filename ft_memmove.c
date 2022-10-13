/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:34:07 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/12 08:34:11 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ss;
	char	*dd;

	ss = (char *)src;
	dd = (char *)dst;
	if (ss == NULL || dd == NULL)
	{
		return (NULL);
	}
	if ((ss < dd) && (dd < ss + len))
	{
		ss = ss + len;
		dd = dd + len;
		while (len)
		{
			*(dd) = *(ss);
			dd--;
			ss--;
			len--;
		}
	}
	else
	{
		while (len)
		{
			*(dd) = *(ss);
			dd++;
			ss++;
			len--;
		}
	}
	return (dd);
}
int main()
{
	char src[] = "abcde";
	printf("%s\n",ft_memmove(src + 1,src,5));
	printf("%s",memcpy(src + 1,src,5));
	return 0;
}

