/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d10_pointeur_sur_fonction.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 18:03:44 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/16 18:29:43 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// EXEMPLE avec un pointeur
int		x;
int		*y;

x = 42;
y = &x;

*y = 0;		// affecte ''0" a la variable ''x"

// EXEMPLE pointeur sur fonction
int		x;
int		*y;

void		f(char c);

void	(*func_ptr)(char);


// EXEMPLE de base
#include <unistd.h>		//for write

void		ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

int		main(void)
{
	void	(*f_ptr)(char);
	f_ptr = &ft_putchar;
	f_ptr('z');
	return (0);
}



// EXEMPLE avec typedef
#include <unistd.h>		//for write

typedef void (*funcptr)(char);

void		ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

int		main(void)
{
	funcptr		f_ptr;		//syntaxe apres filedef
	f_ptr = &ft_putchar;
	f_ptr('z');
	return (0);
}


// EXEMPLE d'applicationi, meilleure lisibilite
// en pseudo code
- put_stdout	-> ecrit sur la sortie standard
- put_file		-> ecrit dans un fichier
- put_network	-> ecrit sur le reseau

//	fun_tab etant un pointeur sur fonctions,

fun_tab = { ( STDOUT, &put_stdout );
			( FILE, &put_file );
			( NETWORK, &put_network ); }

function put( where, what )
{
	pour ( where_r, put_fonction ) dansns fun_tab
	{
		si ( where == where_r )
			put_function( what );
	}
}




