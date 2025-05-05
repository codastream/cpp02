/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:46:16 by fpetit            #+#    #+#             */
/*   Updated: 2025/05/05 16:57:40 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ){}
Point::Point( int x, int y )
{
	this->_x = x;
	this->_y = y;
}
Point::Point( Point& p )
{
	*this = p;
}
Point::~Point( void ){}
Point& Point::operator=( const Point& p )
{
	this->_x = p._x;
	this->_y = p._y;
}

int	Point::getX( void )
{
	return _x;
}

int	Point::getY( void )
{
	return _y;
}
