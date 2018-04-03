/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d12_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 22:30:02 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/16 22:42:54 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#################
// man 2 read

// int read(int fd, char *buf, int count);

// avec:
// fd = File descriptor depuis lequel lire
// buf = buffer de destination
// count = Nombre d'octets a lire

// valeur de retour:
// Nombre d'octets lus, ou -1 en cas d'erreur.




#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "j12.h"

#define BUF_SIZE 10

int		main()
{
	int		fd;
	int		ret;
	char buf[BUF_SIZE + 1];

	fd = open("42", OWRONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	while (ret = read(fd, buf, BUF_SIZE))
	{
		buf[ret] = '\0';
		ft_putnbr(ret);
		ft_putstr(buf);
	}
	ft_putnbr(ret);
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (0);
}
