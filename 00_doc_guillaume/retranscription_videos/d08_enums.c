/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enums.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 16:12:48 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/16 16:19:21 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

enum		e_list
{
	e_list_val0;		//par defaut vaut 0
	e_list_val1;		//par defaut vaut 1
	e_list_val2 = 7;	//par defaut vaut 2, ici 7
	e_list_val3;		//par defaut vaut 3, ici 8
	e_list_val4;		//par defaut vaut 4, ici 9...

}

int		main(void)
{
	enum e_list a;		//Definition de la liste ''a"

	a = val3;			//''a" vaut le ''rang" de val3
						//dans la e_list.
	return (a);

}
