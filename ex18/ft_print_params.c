/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienhanse <julienhanse@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:01:39 by juhanse           #+#    #+#             */
/*   Updated: 2024/10/09 16:00:24 by julienhanse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int ac, char **ag)
{
	int	i;
	int	j;

	i = 1;
	if (ac < 2)
		return (0);
	while (ag[i])
	{
		j = 0;
		while (ag[i][j])
		{
			ft_putchar(ag[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
