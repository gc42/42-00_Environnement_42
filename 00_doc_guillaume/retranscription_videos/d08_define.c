/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:retranscription_videos/d08_define.c
/*   Created: 2017/09/16 17:02:15 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/16 17:05:53 by gcaron           ###   ########.fr       */
=======
/*   Created: 2017/08/30 19:24:57 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/06 15:53:07 by gcaron           ###   ########.fr       */
>>>>>>> origin/master:ex00/ft_print_alphabet.c
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#define TOTO(x) #x		//Prends ''x" comme chaine de caracteres

int		main(void)
{
	char		*str;

	str = TOTO(bonjour les piscineux);		//TOTO est bien remplace...
	write(1, str, 21);					//par ''bonjour...neux"
	return (0);
}
