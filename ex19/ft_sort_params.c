/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienhanse <julienhanse@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:04:26 by juhanse           #+#    #+#             */
/*   Updated: 2024/10/09 16:06:35 by julienhanse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_argv(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **ag)
{
	int	i;
	int	j;

	i = 1;
	if (ac < 2)
		return (0);
	ft_sort_argv(ac, ag);
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
