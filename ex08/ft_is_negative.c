/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:30:16 by gauffret          #+#    #+#             */
/*   Updated: 2016/11/04 10:04:34 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_is_negative(int n)
{
	char c;

	if (n < 0)
		c = 'N';
	else
		c = 'P';
	ft_putchar(c);
}
