/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:31:41 by juhanse           #+#    #+#             */
/*   Updated: 2024/10/07 15:32:19 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	racine;
	int	sqrt;

	racine = 1;
	sqrt = 0;
	if (nb > 2147395600)
		return (0);
	if (nb == 1)
		return (1);
	while (racine <= nb / 2)
	{
		sqrt = racine * racine;
		if (sqrt == nb)
			return (racine);
		racine++;
	}
	return (0);
}
