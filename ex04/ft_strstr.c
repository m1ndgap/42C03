/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:15:58 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/11 17:38:23 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>
#include <unistd.h> */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	y;
	char			*r;

	i = 0;
	y = 0;
	r = "0";
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			r = &str[i];
			while (str[i] == to_find[y])
			{
				i++;
				y++;
				if (to_find[y] == '\0')
					return (r);
			}
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char *str = "piscine Benguerir Khouribga";
	char *find = "";
	char *find2 = "I'm";
	char *find3 = "our";
	char *find4 = "zzz";
	char *test1 = ft_strstr(str, find);
	char *test2 = ft_strstr(str, find2);
	char *test3 = ft_strstr(str, find3);
	char *test4 = ft_strstr(str, find4);
	char *test5 = strstr(str, find);
	char *test6 = strstr(str, find2);
	char *test7 = strstr(str, find3);
	char *test8 = strstr(str, find4);
	printf("\nft_strstr result: %s", test1);
	printf("\nft_strstr result: %s", test2);
	printf("\nft_strstr result: %s", test3);
	printf("\nft_strstr result: %s", test4);
	printf("\n------------\nstrstr result: %s", test5);
	printf("\nstrstr result: %s", test6);
	printf("\nstrstr result: %s", test7);
	printf("\nstrstr result: %s", test8);
} */