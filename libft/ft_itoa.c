/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:00:44 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/16 14:00:00 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_numiterate(int n)
{
	int i;

	i = 1;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc((ft_numiterate(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if	 (n == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	str[i] = '\0';
	return (str);
}
