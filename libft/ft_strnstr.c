/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:00:29 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/19 14:00:13 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!ft_strlen(little) || big == little)
		return ((char *)big);
	while (big[i] && i++ < len)
	{
		j = 0;
		while (little[j] && (big[i + j] == little[j]) && ((i + j) < len))
			j++;
		if (!little[j])
			return((char *)big + i);
	}
	return (NULL);
}
