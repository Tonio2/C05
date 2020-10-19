/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:16:08 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/19 15:56:48 by alabalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int facteur;
	unsigned int n;

	n = (unsigned int)nb;
	facteur = 2;
	if (nb <= 1)
		return (0);
	while (facteur * facteur <= n)
	{
		if (n % facteur == 0)
			return (0);
		facteur++;
	}
	return (1);
}
