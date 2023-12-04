/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:34:35 by mburova           #+#    #+#             */
/*   Updated: 2023/12/04 22:13:07 by mburova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *arr)
{
	int	len;

	len = 0;
	while(arr[len])
	{
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	
}
