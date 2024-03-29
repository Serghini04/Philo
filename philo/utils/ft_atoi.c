/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:19:03 by meserghi          #+#    #+#             */
/*   Updated: 2024/03/16 00:37:45 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

long	ft_atoi(char *str)
{
	int		i;
	long	res;
	int		s;

	i = 0;
	res = 0;
	s = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		if ((res > 2147483648 && s == -1) || (res > 2147483647 && s == 1))
			return (-1);
		i++;
	}
	if (str[i] != '\0')
		return (-1);
	return (s * res);
}
