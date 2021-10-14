/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft-unit-test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:18:59 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/14 19:07:24 by jmartin          ###   ########.fr       */
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

void	*ft_memchr(const void *str, int c, size_t n);
/*
#include <stdio.h>
#include <string.h>

int main (void) {
	const char str[] = "42 Lausanne";
	const char ch = ' ';
	char *ret;

	ret = ft_memchr(str, ch, strlen(str));
	printf("\nft_memchr()\n");
	printf("String after |%c| is - |%s|\n", ch, ret);

	printf("\n==================================\n");

	ret = memchr(str, ch, strlen(str));
	printf("\nmemchr()\n");
	printf("String after |%c| is - |%s|\n", ch, ret);
	return(0);
} */

int	ft_memcmp(const void *s1, const void *s2, size_t n);
/*
#include <stdio.h>
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

void *ft_memcpy(void *dst, const void *src, size_t n);

/*
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
} */

void	*ft_memmove(void *dst, const void *src, size_t n);
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[] = "oldstring";
	const char src[] = "newstringnewstring";

	char dest2[] = "oldstring";
	const char src2[] = "newstringnewstring";

	printf("\nft_memmove()\n");
	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	printf("\n\n=======================\n\n");

	printf("\nmemmove()\n");
	printf("Before memmove dest = %s, src = %s\n", dest2, src2);
	memmove(dest2, src, 9);
	printf("After memmove dest = %s, src = %s\n\n", dest2, src2);

	return(0);
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

int	ft_strncmp(const char *s1, const char *s2, size_t n);
/*
#include <stdio.h>
#include <string.h>

int main (void) {
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "abclef");
	strcpy(str2, "abcDef");

	ret = ft_strncmp(str1, str2, 3);

	printf("\nft_strncmp():\n");
	if(ret < 0) {
		printf("str1 is less than str2 -> %d", ret);
	} else if(ret > 0) {
		printf("str2 is less than str1 -> %d", ret);
	} else {
		printf("str1 is equal to str2 -> %d", ret);
	}

	printf("\n\n=======================\n\n");

	ret = strncmp(str1, str2, 3);
	printf("\nstrncmp():\n");
	if(ret < 0) {
		printf("str1 is less than str2 -> %d", ret);
	} else if(ret > 0) {
		printf("str2 is less than str1 -> %d", ret);
	} else {
		printf("str1 is equal to str2 -> %d", ret);
	}
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
