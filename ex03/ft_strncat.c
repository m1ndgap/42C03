/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:05:47 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/11 17:40:46 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>
#include <unistd.h> */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (nb-- && src[y] != '\0')
	{
		dest[i + y] = src[y];
		y++;
	}
	dest[i + y] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	str1[15] = "I'm a string";
	char	*str2;
	char	*test1;
	char	*test2;

	str2 = "adddddddd";
	// char *str3 = "concat the cat";
	// char *str4 = "ZZZZZZZZZZzzzzz";
	// char *str5 = "twas brillig";
	test1 = ft_strncat(str1, str2, 5);
	test2 = strncat(str1, str2, 5);
	// char *test2 = ft_strncat(str2, str5);
	// char *test3 = ft_strncat(str3, str4);
	printf("returns:\n%s", test1);
	printf("\nreturns:\n%s", test2);
	// printf("Mine: Default:\n%s", test2);
	// printf("Mine: Default:\n%s", test3);
}*/
