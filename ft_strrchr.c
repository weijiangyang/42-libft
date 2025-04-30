/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 07:29:30 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/30 14:23:16 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	lastoccurrence;

	lastoccurrence = NULL;
	while (*s)
	{
		if (*s == (char)c)
			lastoccurrence = *s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (lastoccurrence);
}
