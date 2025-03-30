/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+    */
/*   By: mgirgin <mgirgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 21:56:15 by mgirgin           #+#    #+#             */
/*   Updated: 2025/03/29 12:14:53 by mgirgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/* 
int	main(void)
{
	printf("Fatorial de -1 = %d\n", ft_iterative_factorial(-1));
	printf("Fatorial de 0 = %d\n", ft_iterative_factorial(0));
	printf("Fatorial de 1 = %d\n", ft_iterative_factorial(1));
	printf("Fatorial de 5 = %d\n", ft_iterative_factorial(5));
}
*/
