/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:47:02 by fpetit            #+#    #+#             */
/*   Updated: 2025/07/26 15:54:51 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.class.hpp"
#include "Fixed.class.hpp"

/*
 * calculates vector product of pa (A - p) and pb (B - p)
 */
Fixed	signedArea(Point segstart, Point segend, Point p)
{
	Fixed	product;

	product = ((segstart.getX() - p.getX()) * (segend.getY() - p.getY())) \
		- ((segend.getX() - p.getX()) * segstart.getY() - p.getY());
	return (product);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool	has_on;
	bool	has_neg;
	bool	has_pos;

	Fixed areaABP = signedArea(a, b, point);
	Fixed areaBCP = signedArea(b, c, point);
	Fixed areaCAP = signedArea(c, a, point);
	has_on = areaABP == 0 || areaBCP == 0 || areaCAP == 0;
	if (has_on)
		return (false);
	has_pos = areaABP > 0 || areaBCP > 0 || areaCAP > 0;
	has_neg = areaABP < 0 || areaBCP < 0 || areaCAP < 0;
	return !(has_neg && has_pos);
}
