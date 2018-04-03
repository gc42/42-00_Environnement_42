/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 09:00:00 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/06 15:51:20 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_for_print_comb(int n, int p, int q)
{
	if (!(n == '0' && p == '1' && q == '2'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(n);
	ft_putchar(p);
	ft_putchar(q);
}

void	ft_print_comb(void)
{
	char	n;
	char	p;
	char	q;

	n = '0';
	while (n <= '9')
	{
		p = n + 1;
		while (p <= '9' && p > n)
		{
			q = p + 1;
			while (q <= '9' && q > p)
			{
				ft_print_for_print_comb(n, p, q);
				q++;
			}
			p++;
		}
		n++;
	}
}
