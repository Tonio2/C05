/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 11:29:01 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/15 11:36:32 by alabalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	if (nb < 0 || nb > 15)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_iterative_factorial(nb - 1));
}
