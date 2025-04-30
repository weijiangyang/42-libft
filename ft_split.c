/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:24:55 by weiyang           #+#    #+#             */
/*   Updated: 2025/04/30 08:14:23 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count ++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}	
	return (count);
}

int	len_word(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char *write_word(char const *s, char c)
{
	int	len;
	char	*word;
	int	i;

	i = 0;
	len = len_word(s, c);
	word = (char *)malloc ((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	free_split(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

char **ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		nbr_words;

	i = 0;
	nbr_words = count_words(s, c);
	arr = (char **)malloc ((nbr_words + 1) * sizeof (char *));
	if (!arr)
		return (NULL);
	while (i < nbr_words)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			arr[i] = write_word(s, c);
			if (!arr[i])
			{
				free_split(arr, i);
				return (NULL);
			}
			s += len_word(s, c);
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}



#include <stdio.h>

int	main(void)
{
	char const *s = "ab,cd,ef, g";
	int	count = count_words(s,',');
       	printf ("the nombre de mots est %d", count);
	return (0);
}	

