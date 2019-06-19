/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   degrtorad.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 16:22:47 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/13 17:10:51 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rotate.h"

float	degrtorad(float deg)
{
	return (deg * (3.14159f / 180));
}

float	radtodeg(float rad)
{
	return (rad * (180 / 3.14159f));
}