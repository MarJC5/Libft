/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:11:20 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/22 17:44:00 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_words_count(char const *str, char delimiter)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	if (str[i] == '\0' || ((str[0] == delimiter ) && (str[i + 1] == '\0')))
		words--;
	while (str[i++])
	{
		if (str[i] == delimiter)
			words++;
	}
	return (words + 1);
}

char	**ft_split(char const *str, char c)
{
	(void)str;
	(void)c;
	return (NULL);
}

#include <stdio.h>

int main(void)
{
	char str[] = "iterate character by character, looking for your delimiter";
	char str2[] = " delimiter delimiter";
	char str3[] = " ";
	char str4[] = "";
	printf("%d\n", ft_words_count(str, ' '));
	printf("%d\n", ft_words_count(str2, ' '));
	printf("%d\n", ft_words_count(str3, ' '));
	printf("%d\n", ft_words_count(str4, ' '));
	return (0);
}
