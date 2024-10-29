/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:10:08 by juhanse           #+#    #+#             */
/*   Updated: 2024/10/07 15:10:49 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (0);
	i = max - min;
	tab = (int *)malloc(i * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
