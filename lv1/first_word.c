/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:52:50 by aahrach           #+#    #+#             */
/*   Updated: 2022/12/18 09:11:34 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int b = 0;
	if (ac == 2)
	{
		while (b == 0 && av[1][i])
		{
			if (av[1][i] != ' ')
			{
				while (av[1][i] != ' ' && av[1][i])
				{
					write (1, &av[1][i], 1);
					i++;
				}
				b++;
			}
			else
				i++;
		}
	}
	write (1, "\n", 1);
}

