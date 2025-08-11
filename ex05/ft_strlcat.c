/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:26:20 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/11 17:38:54 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	lensrc;
	unsigned int	lendest;
	unsigned int	lentotal;

	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	lentotal = lendest + lensrc;
	while (i < size)
	{
		if (dest[i] != '\0')
		{
			i++;
		}
		else if (dest[i] == '\0')
		{
			while (size < lentotal)
			{
				dest[i + y] = src[y];
				y++;
			}
			return (lentotal);
		}
	}
	return (size);
}

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char dest[100] = "destdest";
	char src[] = "Note, however, that if strlcat() traverses";
	int size = 100;

	printf("%d", ft_strlcat(dest, src, size));
}