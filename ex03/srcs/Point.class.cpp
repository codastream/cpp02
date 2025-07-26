/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:46:16 by fpetit            #+#    #+#             */
/*   Updated: 2025/07/26 15:18:45 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.class.hpp"

Point::Point(void) : _x(0), _y(0) {}
Point::Point(const float x, const float y)
{
	_x = Fixed(x);
	_y = Fixed(y);
}
Point::Point(const Point& p)
{
	*this = p;
}
Point::~Point(void){}

Point& Point::operator=(const Point& p)
{
	if (this != &p)
	{
		_x = p._x;
		_y = p._y;
	}
	return (*this);
}

Fixed	Point::getX(void)
{
	return _x;
}

Fixed	Point::getY(void)
{
	return _y;
}
