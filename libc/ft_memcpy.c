/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:24:44 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/14 18:48:45 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*sdest;
	const char	*ssrc;
	size_t		i;

	i = -1;
	sdest = (char *)dst;
	ssrc = (const char *)src;
	while (++i < n)
		sdest[i] = ssrc[i];
	return (dst);
}
