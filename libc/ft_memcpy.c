/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:51:36 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/12 00:37:02 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    
}

#include <stdio.h>
#include <string.h>

int main (void) {
   const char src[60] = "copies n characters from memory area src to memory area dest";
   char dest[50] = "Do you know the way?";

   printf("Before ft_memcpy() dest = %s\n", dest);

   ft_memcpy(dest, src, ft_strlen(src)+1);
   printf("After ft_memcpy() dest = %s\n", dest);
   
   memcpy(dest, src, ft_strlen(src)+1);
   printf("After memcpy() dest = %s\n", dest);
   return(0);
}