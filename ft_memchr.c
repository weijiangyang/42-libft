/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 07:44:41 by weiyang           #+#    #+#             */
/*   Updated: 2025/05/02 08:10:06 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;

	ptr = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*ptr == ch)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
