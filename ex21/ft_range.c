/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:55:07 by rabougue          #+#    #+#             */
/*   Updated: 2016/05/04 09:16:38 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	len;
	int	i;

	len = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * len);
	if (min < max)
	{
		while (min <= max)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	return (tab);
}
