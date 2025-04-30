/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:15:57 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/30 16:30:24 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_number(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = 1;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb / 10 > 0)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len_nbr;
	char	*str;
	int		i;
	long	nb;

	nb = n;
	len_nbr = len_number(nb);
	i = len_nbr - 1;
	str = (char *)malloc (sizeof (char) * (len_nbr + 1));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[i] = nb % 10 + '0';
		i--;
		nb /= 10;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;
	int	count;
	char	*str;

	n = -4; 
	count = len_number(n);
	str = ft_itoa(n);
	printf("the result is %s", str);
	return (0);
}*/
