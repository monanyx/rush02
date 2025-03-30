/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgirgin <mgirgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 21:53:19 by mgirgin           #+#    #+#             */
/*   Updated: 2025/03/28 21:53:22 by mgirgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> 

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}

/* 
int	main(void)
{
	printf("Power of 2 ^ -1 = %d\n", ft_recursive_power(2, -1));
	printf("Power of 0 ^ 0 = %d\n", ft_recursive_power(0, 0));
	printf("Power of 3 ^ 1 = %d\n", ft_recursive_power(3, 1));
	printf("Power of -3 ^ 3 = %d\n", ft_recursive_power(-3, 3));
} */
