/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:08:04 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/30 11:20:51 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	char	*result;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	result = (char *)malloc ((size + 1) * sizeof(char));
	if(!result)
		return (NULL);
	while (i < size)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
