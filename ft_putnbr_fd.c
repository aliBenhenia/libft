/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:35:06 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/12 19:35:07 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-',fd);
		n = n * -1;
	}
	if (n % 10 == )
	{
		/* code */
	}
	
}
int main(int argc, char const *argv[])
{
	int fd = open("qq",O_WRONLY);
	ft_putnbr_fd(-9,fd);
	return 0;
}
