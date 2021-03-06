/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:21:42 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/19 15:41:54 by alabalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int result;
	unsigned int n;

	n = (unsigned int)nb;
	result = 0;
	if (nb < 0)
		return (0);
	while (result * result <= n)
	{
		if (result * result == n)
			return ((int)result);
		result++;
	}
	return (0);
}
