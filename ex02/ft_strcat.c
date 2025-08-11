/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:05:47 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/11 17:37:43 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[y] != '\0')
	{
		dest[i + y] = src[y];
		y++;
	}
	dest[i + y] = '\0';
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
#include <unistd.h> */

/* int	main(void)
{
	char	str1[13] = "I'm a string";
	char	*str2;
	char	*test1;
	char	*test2;

	str2 = "+addmepleasexxx";
	// char *str3 = "concat the cat";
	// char *str4 = "ZZZZZZZZZZzzzzz";
	// char *str5 = "twas brillig";
	test1 = ft_strcat(str1, str2);
	test2 = strcat(str1, str2);
	// char *test2 = ft_strcat(str2, str5);
	// char *test3 = ft_strcat(str3, str4);
	printf("\n> ft_strcat returns:\n%s", test1);
	printf("\n> strcat returns:\n%s", test2);
	// printf("Mine: Default:\n%s", test2);
	// printf("Mine: Default:\n%s", test3);
} */
