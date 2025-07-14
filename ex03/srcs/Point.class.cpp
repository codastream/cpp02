/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:46:16 by fpetit            #+#    #+#             */
/*   Updated: 2025/07/14 23:15:02 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.class.hpp"

Point::Point(void){}
Point::Point(const float x, const float y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}
Point::Point(const Point& p)
{
	*this = p;
}
Point::~Point(void){}

Point& Point::operator=(const Point& p)
{
	this->_x = p._x;
	this->_y = p._y;
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
