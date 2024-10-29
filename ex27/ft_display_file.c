/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:14:10 by julienhanse       #+#    #+#             */
/*   Updated: 2024/10/11 11:33:25 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *arg)
{
	int		fd;
	char	buffer[1];

	fd = open(arg, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	while (read(fd, buffer, 1) > 0)
		write(1, buffer, 1);
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac > 2)
			write(1, "Too many arguments.\n", 20);
		if (ac < 2)
			write(1, "File name missing.\n", 19);
		return (1);
	}
	ft_display_file(av[1]);
	return (0);
}
