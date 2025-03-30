/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirgin <mgirgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 19:41:57 by mgirgin           #+#    #+#             */
/*   Updated: 2025/03/29 08:40:49 by mgirgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/* 
int	main(void)
{
	char	*str1 = "wordsandletters";
	char	*str2 = "wordsandlEtters";

	printf("%s is lowercase? %d\n", str1, ft_str_is_lowercase(str1));	
	printf("%s is lowercase? %d\n", str2, ft_str_is_lowercase(str2));
} */
