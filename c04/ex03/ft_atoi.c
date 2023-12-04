/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 21:03:14 by mburova           #+#    #+#             */
/*   Updated: 2023/12/04 19:51:28 by mburova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	s;

	res = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	s = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * s);
}
/*
#include <stdio.h>
int main(int argc, char *argv[]){
	printf("%d", ft_atoi(argv[1]));
	return (0 * argc);
}*/