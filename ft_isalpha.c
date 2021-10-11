/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:49:20 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/11 12:26:58 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	return (0);
}