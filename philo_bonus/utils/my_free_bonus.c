/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_free_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 02:38:54 by meserghi          #+#    #+#             */
/*   Updated: 2024/03/15 01:21:54 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo_bonus.h"

void	my_free(t_philo *data)
{
	// sem_unlink("forks");
	// sem_unlink("write");
	(void)data;
	// free(data->info_philo);
	// // free(data->forks);
	// free(data);
}