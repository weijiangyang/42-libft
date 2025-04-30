/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:16:36 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/28 10:16:01 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t strlcpy (char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while ( i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return	len_src;
}	
		

		


