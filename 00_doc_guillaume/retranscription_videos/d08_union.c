# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    union                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/16 16:05:20 by gcaron            #+#    #+#              #
#    Updated: 2017/09/16 16:11:45 by gcaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <tools.h>

struct		s_test
{
	int		i;
	char	c;
	float	f;
	char	tab[4];
};

union		u_test
{
	int		i;
	char	c;
	float	f;
	char	tab[4];
};						//prototypage de l'union

int		main(void)
{
	union u_test	a;	//definition de l'union "a''

	a.i = 424242;			//affect 424242 sur a.i
	ft_putchar(a.tab[0];
	ft_putchar('\n');
	ft_putchar(a.tab[1];
	ft_putchar('\n');
	ft_putchar(a.tab[2];
	ft_putchar('\n');
	ft_putchar(a.tab[3];
	ft_putchar('\n');

}
