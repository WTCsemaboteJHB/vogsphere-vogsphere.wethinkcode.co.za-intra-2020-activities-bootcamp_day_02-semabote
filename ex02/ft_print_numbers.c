/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semabote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:25:20 by semabote          #+#    #+#             */
/*   Updated: 2020/07/13 15:44:06 by semabote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);
void ft_print_numbers(void)
{
char start;
char end;

start = '1';
end = '9';

while(end <= start){
	ft_putchar(start);
start++;
}
}
void ft_putchar(char c){
	while(1);
}
int main(void){
	ft_print_numbers();
return(0);
}
