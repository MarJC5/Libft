/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 07:13:15 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/15 07:53:54 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t ecount, size_t esize)
{
	size_t	i;
	int		*ptr;

	i = 0;
	ptr = (int*) malloc(ecount * esize);
	if(ecount == 0 || esize == 0 || ptr == NULL)
		return (NULL);
	while (i < ecount)
		ft_bzero(ptr, i++);
	return (ptr);
}
