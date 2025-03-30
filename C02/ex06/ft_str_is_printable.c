/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirgin <mgirgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 09:32:23 by mgirgin           #+#    #+#             */
/*   Updated: 2025/03/29 08:36:55 by mgirgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}
/* 
int	main(void)
{
	char	*str1 = "aB3/!'.;Ko+";
	char	*str2 = "aB3/!'.;Ko±";

	printf("%s is printable? %d\n", str1, ft_str_is_printable(str1));	
	printf("%s is printable? %d\n", str2, ft_str_is_printable(str2));
} */
