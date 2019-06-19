/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divfvector.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:16:21 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:16:21 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_fvector	divfvector(t_fvector v1, float x, float y, float z)
{
	v1.x /= x;
	v1.y /= y;
	v1.z /= z;
	return (v1);
}

t_fvector	divfvtofv(t_fvector v1, t_fvector v2)
{
	v1.x /= v2.x;
	v1.y /= v2.y;
	v1.z /= v2.z;
	return (v1);
}
