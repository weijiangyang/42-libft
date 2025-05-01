/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:07:16 by weiyang           #+#    #+#             */
/*   Updated: 2025/05/01 12:50:24 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s);

char	*ft_strdup(const char *s)
{
	char	*ptr;
	char	*dst;

	if (!s)
		return (NULL);
	ptr = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	dst = ptr;
	while (*s)
		*dst++ = *s++;
	*dst = '\0';
	return (ptr);
}
