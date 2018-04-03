/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d07_etapes_compil.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:18:09 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/16 17:28:41 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Etapes de compilation

int		main()
{
	ft_putstr("42");
	ft_putchar('\n');
	return (0);
}

//Pour compiler les trois fichiers dans ''j07"
//Taper ceci sur la ligne de commande :
gcc main.c ft_putstr.c ft_putchar.c -o j07

//Pour le faire en deux etapes , taper dans le shell:
//  ETAPE 1 "transformer en ''objet" (*.o)"
gcc -c ft_putchar.c		//cree le ft_putchar.o
gcc -c ft_putstr.c		//cree le ft_putstr.o
gcc -c ft_putnbr.c		//cree le ft_putnbr.o
gcc -c main.c			//cree le main.o

// ETAPE 2 "linker les *.o"
gcc main.o ft_putstr.o ft_putchar.o ft_putnbr.o -o j07


