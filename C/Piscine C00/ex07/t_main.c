/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcicek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:32:14 by fcicek            #+#    #+#             */
/*   Updated: 2021/12/01 15:56:59 by fcicek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	putarr(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}

int	main(void)
{
	int	size;
	int	tab[] = {1, 2, 3, 4};

	size = 4;
	printf("Orijinal: ");
	putarr(tab, size);
	ft_rev_int_tab(tab, size);
	printf("donmus: ");
	putarr(tab, size);
}
