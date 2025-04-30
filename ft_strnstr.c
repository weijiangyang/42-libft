/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 07:58:57 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/29 08:39:05 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	if (* little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && (i + j) < len)
		{
			if (little[j] == big[i + j])
				j++;
			else
				break;
		}
		if ( little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

