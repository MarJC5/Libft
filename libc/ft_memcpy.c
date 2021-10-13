/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:24:44 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/13 11:53:37 by jmartin          ###   ########.fr       */
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
	while (i < n && src)
	{
		sdest[i] = ssrc[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main (void) {
	const char src[12] = "42Lausanne";
	char dest[12];
	strcpy(dest,"Helloooo!!!");

	printf("\nft_memcpy()\n");
	printf("Before ft_memcpy() dest = %s\n", dest);
	ft_memcpy(dest, src, ft_strlen(src)+1);
	printf("After ft_memcpy() dest = %s\n", dest);

	printf("\n\n=======================\n\n");

	strcpy(dest,"Helloooo!!");

	printf("\nmemcpy()\n");
	printf("Before memcpy() dest = %s\n", dest);
	memcpy(dest, src, ft_strlen(src)+1);
	printf("After memcpy() dest = %s\n\n", dest);

	return(0);
}
