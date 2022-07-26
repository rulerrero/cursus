/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:27:09 by rherrero          #+#    #+#             */
/*   Updated: 2022/07/12 11:33:53 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}

/*
*	BIBLIOTECA
#include <ctype.h>
* DESCRIPCIÓN
* La función isalpha() comprueba cualquier carácter para el que isupper(3) o 
* islower(3) es verdadero. El valor del argumento debe ser representable como un 
* unsigned char o el valor de EOF.
* PARÁMETROS
* #1. El carácter a probar.
* VALORES DE RETORNO
* La función isalpha() devuelve cero si el carácter es falso y 
* devuelve un valor distinto de cero si el carácter es verdadero.
*/