/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:17:28 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/29 09:32:18 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	ptr = (char *)malloc ((len + 1) * sizeof (char));
	if (!ptr)
		return (NULL);
	while ( i < len && s[start + i])
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
	
	
