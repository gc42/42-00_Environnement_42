/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <gc3d.42@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 00:07:49 by gcaron            #+#    #+#             */
<<<<<<< HEAD:ft_putnbr_marche_pas_pour_0.c
/*   Updated: 2017/09/05 19:18:00 by gcaron           ###   ########.fr       */
=======
/*   Updated: 2017/09/06 15:54:38 by gcaron           ###   ########.fr       */
>>>>>>> origin/master:ex06/ft_putnbr.c
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		n;
	int		x;

<<<<<<< HEAD:ft_putnbr_marche_pas_pour_0.c
	nb = ft_putnbr_filter(nb);
	x = 1;
	n = nb;
//	printf("valeur de n: %d\n", n);
	printf("valeur de nb: %d\n", nb);
	while (n > 9)
	{
		n /= 10;
		x *= 10;
		printf("valeur de x: %d\n", x);
		printf("valeur de n: %d\n", n);
	}
	printf("valeur de nb: %d\n", nb);
//	printf("-valeur de nb: %d\n", nb);
	while (nb > 0)
	{
//		printf(">valeur de  x: %d\n", x);
//		printf(">valeur de nb: %d\n", nb);
		ft_putchar(nb / x + '0');
		nb %= x;
		x /= 10;
//		printf("\n");
//		printf("<valeur de  x: %d\n", x);
//		printf("<valeur de nb: %d\n\n\n", nb);
	}
	ft_putchar('\n');
}

int		ft_putnbr_filter(int nb)
{
=======
>>>>>>> origin/master:ex06/ft_putnbr.c
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	x = 1;
	n = nb;
	while (((n / 10) / x) != 0)
		x *= 10;
	while (x >= 1)
	{
		ft_putchar(nb / x + '0');
		nb %= x;
		x /= 10;
	}
}
