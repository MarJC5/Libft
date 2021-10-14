/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:09:16 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/14 15:04:27 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = -1;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while (++i < n && str1[i] == str2[i])
		;
	return (str1[i] - str2[i]);
}

/* #include <stdio.h>
#include <string.h>

int main (void)
{
	char buffer1[] = "DWgaOtP12df0";
	char buffer2[] = "DWGAOTP12DF0";

	int n;

	printf("\nft_memcmp():\n");
	n = ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );
	if (n>0)
		printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
	else if
		(n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
	else
		printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

	printf("\n===========================================\n");

	printf("\nmemcmp():\n");
	n = memcmp ( buffer1, buffer2, sizeof(buffer1) );
	if (n>0)
		printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
	else if
		(n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
	else
		printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);
	return 0;
} */
