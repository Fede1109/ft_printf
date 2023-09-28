/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:34:34 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2023/09/28 16:37:51 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned long nb, char *alpha)
{
	int	count;

	count = 0;
	if (nb > 15)
	{
		count += ft_print_x(nb / 16, alpha);
		count += ft_print_x(nb % 16, alpha);
	}
	else
		count += ft_print_char(alpha[nb]);
	if (count < 0)
		return (-1);
	return (count);
}
