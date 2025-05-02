/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 07:29:30 by weiyang           #+#    #+#             */
/*   Updated: 2025/05/02 10:43:46 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
{
	char	*lastoccurrence;

	lastoccurrence = NULL;
	while (*s)
	{
		if (*s == (char)c)
			lastoccurrence = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (lastoccurrence);
}
