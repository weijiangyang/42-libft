/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:14:04 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/25 10:26:46 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if(c >= '0'&& c <= '9')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int	c;
	int	result;

	c = '5';
	result = ft_isdigit(c);
	printf("the result is %d", result);
}*/
