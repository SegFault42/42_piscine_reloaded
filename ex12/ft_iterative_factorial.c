/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 19:21:22 by rabougue          #+#    #+#             */
/*   Updated: 2016/09/23 22:19:24 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	facto;

	facto = 1;
	if (nb <= 12 && nb >= 0)
	{
		while (nb > 1)
		{
			facto *= nb;
			--nb;
		}
		return (facto);
	}
	return (0);
}
