/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:retranscription_videos/d08_structures.c
/*   Created: 2017/09/16 16:19:46 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/16 16:45:13 by gcaron           ###   ########.fr       */
=======
/*   Created: 2017/09/01 16:47:11 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/06 15:57:46 by gcaron           ###   ########.fr       */
>>>>>>> origin/master:ex05/ft_print_comb2.c
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_point
{
	int		x;
	int		y;
}				t_point;

int		main(void)
{
	t_point a;		//Definition de la structure ''a"
	t_point b;		//Definition de la structure ''b"
	t_point *ptr;	//Definition pointeur sur structure

	a.x = 10;		//Affectation au ''x" de ''a"
	a.y = 42;		//Affectation au ''y" de ''a"
	b = a;
	ptr = &a;

	(*ptr).x = 10;		//cette ecriture est equivalente...
	ptr->x = 10;		//a cette ecritue
	return (0);
}
