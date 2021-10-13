/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:41:48 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/13 11:21:15 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*ssrc;
	char	*sdst;
	size_t	i;

	i = 0;
	ssrc = (char *)src;
	sdst = (char *)dst;
	while (i < ft_strlen(src) && --n != 0 && src)
	{
		sdst[i] = ssrc[i];
		i++;
	}
	return (dst);
}
