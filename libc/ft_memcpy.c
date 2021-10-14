/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:24:44 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/14 09:44:28 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*sdest;
	char	*ssrc;
	size_t	i;

	i = 0;
	sdest = (char *)dest;
	ssrc = (char *)src;
	while (i < n && ssrc)
	{
		sdest[i] = ssrc[i];
		i++;
	}
	return (dest);
}
