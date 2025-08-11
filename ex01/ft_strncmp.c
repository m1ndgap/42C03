/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:37:42 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/11 12:11:40 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The	strcmp(void) and strncmp() functions return an integer less than,
		equal to,
	or greater than zero if s1 (or the first n bytes thereof) is found,
	respectively, to be less than, to match, or be greater than s2. */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char *str1 = "I'm a string";
	char *str2 = "I'm a strung";
	char *str3 = "I'm a string";
	char *str4 = "I'm z string";
	char *str5 = "I'm / /tring";
	int n = 14;

	int test1 = ft_strncmp(str1, str2, n);
	int test2 = ft_strncmp(str1, str3, n);
	int test3 = ft_strncmp(str1, str4, n);
	int test4 = ft_strncmp(str5, str1, n);
	int ctrl1 = strncmp(str1, str2, n);
	int ctrl2 = strncmp(str1, str3, n);
	int ctrl3 = strncmp(str1, str4, n);
	int ctrl4 = strncmp(str5, str1, n);

	printf("Mine: Default:\n%d\t%d\n%d\t%d\n%d\t%d\n%d\t%d\n", test1, ctrl1,
		test2, ctrl2, test3, ctrl3, test4, ctrl4);
} */