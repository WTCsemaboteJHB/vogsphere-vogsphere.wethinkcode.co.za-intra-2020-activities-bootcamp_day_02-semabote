/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semabote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:59:13 by semabote          #+#    #+#             */
/*   Updated: 2020/07/14 09:00:58 by semabote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
int	ft_is_negative(int n)
{
	if(n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}

}
