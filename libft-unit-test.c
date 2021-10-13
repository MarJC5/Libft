/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft-unit-test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:18:59 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/13 08:10:59 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlen(const char *str);
/*
#include <stdio.h>
#include <string.h>

int main (void) {
	// *(str + c) is for returning the pointer value
	char src[] = "Returns the length of the given byte string";

	printf("ft_strlen() = %zu\n", ft_strlen(src));
	printf("strlen() = %lu\n", strlen(src));
	return(0);
} */

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

char	*ft_strchr(const char *str, int c);
/*
#include <stdio.h>
#include <string.h>

int main (void) {
	const char str[] = "Do you know the way?";
	const char ch = 't';

	printf("\nft_strchr():\n");
	printf("String after |%c| is - |%s|\n", ch, ft_strchr(str, ch));
	printf("\n============================\n\n");
	printf("strchr():\n");
	printf("String after |%c| is - |%s|\n", ch, strchr(str, ch));
	return(0);
} */

int	ft_atoi(const char *str);
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	// This function returns the converted integral number as an int value. If no valid conversion could be performed, it returns zero.

   int val;
   char str[20];

   //strcpy(str, " \f\n\r\t\v98993489");
   //strcpy(str, "-98993489");
   strcpy(str, "98993489");
   val = ft_atoi(str);
   printf("\nft_atoi()\n------\nvalue = %s, Int value = %d\n\n", str, val);

   val = atoi(str);
   printf("atoi()\n------\nvalue = %s, Int value = %d\n\n", str, val);

   printf("===========================================\n");

   strcpy(str, "Hello");
   val = ft_atoi(str);
   printf("\nft_atoi()\n------\nvalue = %s, Int value = %d\n\n", str, val);

   val = atoi(str);
   printf("atoi()\n------\nvalue = %s, Int value = %d\n\n", str, val);

   return(0);
} */
