/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:47:43 by fpetit            #+#    #+#             */
/*   Updated: 2025/05/06 15:43:09 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <string>
#include "Fixed.hpp"

class Point
{
private:
	Fixed	_x;
	Fixed	_y;

public:

	Point( void );
	Point( const float x, const float y );
	Point( const Point& p );
	Point& operator= (const Point& p );
	~Point( void );
	Fixed	getX( void );
	Fixed	getY( void );

};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
void	check(Point& a, Point& b, Point& c, Point& p);

#endif
