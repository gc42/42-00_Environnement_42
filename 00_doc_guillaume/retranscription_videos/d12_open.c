/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d12_open.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 22:06:43 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/16 22:47:01 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// OPEN
############
man 2 OPEN:

int open(char *path, int flags[, mode_t perm]);

avec :
path = fichier
flags = mode d'ouverture
perm = permissions

###############
Valeur de retour:
File descriptor (int) ou -1 en cas d'erreur.

################
Flags:
O_RDONLY	//lecture seulement
O_WRONLY	//ecriture seulement
O_RDWR		//lecture et ecriture

O_CREAT		//si le fichier n'existe pas, le creer
O_TRUNC		//si le fichier existe, ecrire depuis le premier octet
O_APPEND	//si le fichier existe, ecrire a partir du dernier octet


Nota: Les flags peuvent etre additionnes avec ''OU" binaire.

// EXEMPLE
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "j12.h"

int		main()
{
	int		fd;
	fd = open("alpha", O_RDONLY);
	ft_putnbr(fd);
	return (0);
}







###################################
man 2 close:

int	close(int fd);

avec:
fd = File descriptor a fermer

valeur de retour:
0, ou -1 en cas d'erreur


##########
EXEMPLE
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "j12.h"

int		main()
{
	int		fd;
	fd = open("42", OWRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	ft_putnbr(fd);
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (0);
}






