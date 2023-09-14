/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:34:43 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/14 10:51:47 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char c[] = "Hello World!";
	char c2[] = "Maybe something	different+-8(*^^y5";

	printf("%d, %lu\n", ft_strlen(c), strlen(c));
	printf("%d, %lu", ft_strlen(c2), strlen(c2));
}*/
