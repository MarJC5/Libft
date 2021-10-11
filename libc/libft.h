/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:30:49 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/12 00:13:24 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

int ft_toupper(int c);
int ft_tolower(int c);

void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memset(void *buf, int c, size_t n);
void    ft_bzero(void *buf, size_t n);

size_t  ft_strlen(const char *str);

#endif