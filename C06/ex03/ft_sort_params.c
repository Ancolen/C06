/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:52:41 by myerturk          #+#    #+#             */
/*   Updated: 2023/02/21 15:36:02 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **av, int i)
{
	char	*max;
	int		n;

	n = 0;
	while (av[i][n] || av[i + 1][n])
	{
		if (av[i][n] > av[i + 1][n])
		{
			max = av[i + 1];
			av[i + 1] = av[i];
			av[i] = max;
			break ;
		}
		if (av[i][n] == av[i + 1][n])
			n++;
		if (av[i][n] < av[i + 1][n])
			break ;
	}
}

int	main(int ac, char **av)
{
	int		n;
	int		i;
	int		j;

	n = 1;
	while (n < ac - 1)
	{
		i = 1;
		while (i < ac - 1)
		{
			swap(av, i);
			i++;
		}
		n++;
	}
	n = 1;
	while (n < ac)
	{
		j = 0;
		while (av[n][j])
			write(1, &av[n][j++], 1);
		n++;
		write(1, "\n", 1);
	}
}
