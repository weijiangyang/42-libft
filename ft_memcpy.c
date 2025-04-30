/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:03:54 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/25 13:11:53 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	size_t		i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>

int main()
{
    char src[] = "Hello, world!";
    char dest[20];

    ft_memcpy(dest, src, strlen(src) + 1); // Copy including '\0'
    printf("Copied: %s\n", dest); // Output: Copied: Hello, world!
}

