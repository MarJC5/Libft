/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:27:16 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/11 12:27:20 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}	