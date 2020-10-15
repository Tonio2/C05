/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:21:42 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/15 13:24:46 by alabalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int result;

	result = 0;
	if (nb < 0)
		return (0);
	while (result * result < nb)
		result++;
	if (result * result == nb)
		return (result);
	return (0);
}
