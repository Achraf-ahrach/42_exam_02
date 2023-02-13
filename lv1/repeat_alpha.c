/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:46:52 by aahrach           #+#    #+#             */
/*   Updated: 2022/12/18 09:12:48 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = 0;
				j = av[1][i] - 97;
				while (j >= 0)
				{
					write (1, &av[1][i], 1);
					j--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = 0;
				j = av[1][i] - 65;
				while (j >= 0)
				{
					write (1, &av[1][i], 1);
					j--;
				}
			}
			else
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1,"\n",1);
}

