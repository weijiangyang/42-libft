/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:42:15 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/25 10:57:20 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memset(void *s, int c, size_t n)
{
	unsigned char	*mem;
	unsigned int	i;

	i = 0;
	mem = (unsigned char *)s;
	while (i < n)
	{
		mem[i] = c;
		i++;
	}
	return (s);
}

#include <stdio.h>

int	main(void)
{
	char	arr[10];
	int		c;
	size_t		n;
	size_t		i;

	i = 1;
	c = 67;
	n = 9;
	memset(arr, c,n);
	while (i < n)
	{
		printf("%c", arr[i]);
		i++;
	}
	return (0);
}	




