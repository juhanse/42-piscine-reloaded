/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:07:12 by juhanse           #+#    #+#             */
/*   Updated: 2024/10/11 11:15:57 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*buffer;

	i = 0;
	while (src[i])
		i++;
	buffer = (char *)malloc((i + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	i = 0;
	while (src[i])
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
