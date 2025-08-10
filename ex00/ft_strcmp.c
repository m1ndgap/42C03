/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:37:42 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 18:42:42 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>
#include <unistd.h> */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// Why doesnt this work?
// because it still needs to return diff even if the s1 is over, and it just 
// returns 0
/* int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if ((s1[i] != s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
} */

/* int	main(void)
{
	char *str1 = "I'm a string";
	char *str2 = "I'm a strung";
	char *str3 = "I'm a string";
	char *str4 = "I'm z string";
	char *str5 = "I'm / /tring";

	int test1 = ft_strcmp(str1, str2);
	int test2 = ft_strcmp(str1, str3);
	int test3 = ft_strcmp(str1, str4);
	int test4 = ft_strcmp(str5, str1);
	int ctrl1 = strcmp(str1, str2);
	int ctrl2 = strcmp(str1, str3);
	int ctrl3 = strcmp(str1, str4);
	int ctrl4 = strcmp(str5, str1);

	printf("Mine: Default:\n%d %d\n%d %d\n%d %d\n%d %d\n", test1, ctrl1, test2,
		ctrl2, test3, ctrl3, test4, ctrl4);
} */

/* int	main(void){
	char *x;
	
	x = "asdasdasd";

	char y[15] = "asdsad";
} */