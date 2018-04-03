/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:retranscription_videos/d07_malloc.c
/*   Created: 2017/09/16 13:27:05 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/16 13:41:18 by gcaron           ###   ########.fr       */
=======
/*   Created: 2017/09/04 08:59:11 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/06 15:53:39 by gcaron           ###   ########.fr       */
>>>>>>> origin/master:ex02/ft_print_numbers.c
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define LEN		42000000

int		main()
{
	int		i;
	char	*str;

	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	free(str);
	while (1)
		;
	return (0);
}
