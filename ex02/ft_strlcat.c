/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:26:20 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 19:04:50 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The	strlcpy(void) and strlcat() functions return the total length of the string they tried to create.  For strlcpy() that means the length of src.  For strlcat() that means the initial length of dst plus the length of
src.  While this may seem somewhat confusing,
it was done to make truncation detection simple.

Note, however,
	that if strlcat() traverses size characters without finding a NUL,
the length of the string is considered to be size and the destination string will not be NUL-terminated (since there was no space for the NUL).  This keeps strlcat() from running off the end of a string.  In practice this should not happen (as it
means that either size is incorrect or that dst is not a proper “C” string).  The check exists to prevent potential security problems in incorrect code. */

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