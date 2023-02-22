/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:35:15 by myerturk          #+#    #+#             */
/*   Updated: 2023/02/21 12:01:27 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	int		k;

	k = 1;
	while (k < ac)
	{
		i = 0;
		while (av[k][i])
		{
			write(1, &av[k][i], 1);
			i++;
		}
		write(1, "\n", 1);
		k++;
	}
}
