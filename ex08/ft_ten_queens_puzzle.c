/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 22:04:14 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/19 16:15:27 by alabalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 10

/*
**	Affiche une solution quand elle est atteinte
*/

void	ft_print(int sol[N])
{
	int		cpt;
	char	c;

	cpt = 0;
	while (cpt < N)
	{
		c = '0' + sol[cpt];
		write(1, &c, 1);
		cpt++;
	}
	write(1, "\n", 1);
}

/*
**	returns 1 if sol[col] can hold the value row
**	It means the queen can be located on the square (col, row) of the chessboard
*/

int		is_location_legal(int sol[N], int col, int row)
{
	int cpt;
	int tmp;

	cpt = 1;
	while (col - cpt >= 0)
	{
		tmp = sol[col - cpt];
		if (tmp == row || tmp == row + cpt || tmp == row - cpt)
			return (0);
		cpt++;
	}
	return (1);
}

/*
**	returns 1 if a solution is found
**	returns 0 if th puzzle can't be solved
**	add what's returned the solutions counter
*/

int		solve(int sol[N], int col, int nb_solutions)
{
	int cpt;

	cpt = 0;
	while (cpt < N)
	{
		if (is_location_legal(sol, col, cpt))
		{
			if (col == N - 1)
			{
				sol[col] = cpt;
				ft_print(sol);
				return (1);
			}
			sol[col] = cpt;
			nb_solutions += solve(sol, col + 1, 0);
		}
		cpt++;
	}
	sol[col] = -3;
	return (nb_solutions);
}

int		ft_ten_queens_puzzle(void)
{
	int nb_solutions;
	int sol[N];
	int cpt;

	cpt = 0;
	while (cpt < N)
	{
		sol[cpt] = -3;
		cpt++;
	}
	nb_solutions = solve(sol, 0, 0);
	return (nb_solutions);
}
