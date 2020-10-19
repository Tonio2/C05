/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:13:01 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/19 16:16:32 by alabalet         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
