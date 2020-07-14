/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semabote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 09:06:36 by semabote          #+#    #+#             */
/*   Updated: 2020/07/14 09:07:56 by semabote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unilib.h>
void	ft_putchar(char c);

void	ft_groups(char a, char b, char c);

void	ft_print_comb(void)
{
	char	a;

	char	b;

	char	c;

	a = '0';
	b = '0';
	c = '0';
	while(a <= '9')
	{
		b = a + 1;
		while(b <= '9')
		{
			c = b + 1;
			while(c <= '9')
			{
				ft_groups(a,b,c);
				c ++;
			}
			b ++;
		}
		a ++;
	}
}
