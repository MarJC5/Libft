/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:26:34 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/14 16:30:30 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len < n)
		ft_memmove(dst, src, src_len + 1);
	else if (n > 0)
	{
		ft_memmove(dst, src, n - 1);
		dst[n - 1] = '\0';
	}
	return (src_len);
}
