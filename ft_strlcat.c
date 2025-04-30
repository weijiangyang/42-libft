/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:18:12 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/28 13:28:36 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_strlen(char *str);

size_t ft_strlcat (char *dst,  char * src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	while (i < size - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i]  = '\0';
	return (src_len + dst_len);
}


#include <stdio.h>
#include <string.h>

int main() {
    char dst[20] = "Hello, ";
	char *src = "World!";

    size_t result = ft_strlcat(dst, src, sizeof(dst));

    printf("Resulting string: %s\n", dst);  // Output: "Hello, World!"
    printf("Returned length: %zu\n", result);  // Output: 13 (length of "Hello, World!")

    return 0;
}

