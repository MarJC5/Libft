/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:54:44 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/14 21:58:05 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	if (n < dst_len + 1)
		return (src_len + n);
	else if (n > dst_len + 1)
	{
		while (i < n - 1)
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (dst_len + src_len);
}
