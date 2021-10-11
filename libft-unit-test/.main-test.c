/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main-test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:18:59 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/12 00:30:35 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *buf, int c, size_t n);
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50] = "Fill a byte string with a byte value";
    printf("\nBefore ft_memset(): %s\n", str);
  
    // Fill 8 characters starting from str[2] with '.'
    ft_memset(str + 2, '.', 8*sizeof(char));
    memset(str + 2, '.', 8*sizeof(char));
    
    printf("\nAfter ft_memset(): \n%s\n", str);
    printf("After memset():  \n%s\n", str);
    return 0;
} */

void    ft_bzero(void *buf, size_t n);
/*
#include <stdio.h>
#include <strings.h>

int main(void)
{
    char str[50] = "Fill n byte string with 0 value";
    printf("\nBefore ft_bzero(): %s\n", str);
  
    // Fill 8 characters starting from str[2] with '.'
    ft_bzero(str + 2, 0);
    printf("N value is 0: \n%s", str);

    ft_bzero(str + 2, 8*sizeof(char));
    printf("\nAfter ft_bzero(): \n%s\n", str);

    bzero(str + 2, 8*sizeof(char));
    printf("After bzero():  \n%s\n", str);
    return 0;
} */