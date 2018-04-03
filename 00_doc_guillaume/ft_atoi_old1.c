/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 00:43:59 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/06 03:18:14 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** what_type == 1  > isspace
** what_tupe == 2  > isnumber
** what_type == 3  > is else character
*/

int		ft_putchar(char c);

int	ft_type(char *s, int i)
{
	int		type;

	if (s[i] == ' ' || s[i] == '\n' ||  s[i] == '\t' || s[i] == '\v' \
		|| s[i] == '\f' || s[i] == '\r')
		type = 1;
	else if ('0' <= s[i] && s[i] <= '9')
		type = 2;
	else
		type = 3;
	return (type);
}

int		ft_atoi(char *str)
{
	int		i;

	if (str[0] == '\0')
		return (0);
	else
	{
		i = 0;
		while (ft_type(&str[i],i) == 1 && str[i] != '\0')
			i++;
		if ((str[i] == '+' || str[i] == '-') && (ft_type(&str[i + 1], i) == 2))
		{
			ft_putchar(str[i]);
			i++;
		}
		else if (ft_type(&str[i], i) == 2)
		{
			while (ft_type(&str[i], i) == 2 && str[i] != '\0')
			{
				ft_putchar(str[i]);
				i++;
			}
		}
		else
			return (0);
	}
	return (2);
}
