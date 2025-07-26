/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:47:43 by fpetit            #+#    #+#             */
/*   Updated: 2025/07/26 15:15:24 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_HPP
# define POINT_CLASS_HPP

#include <string>
#include "Fixed.class.hpp"

class Point
{
	private:
		Fixed	_x;
		Fixed	_y;

	public:

		Point(void);
		Point(const float x, const float y);
		Point(const Point& p);

		~Point(void);

		Point& operator= (const Point& p);

		Fixed	getX(void);
		Fixed	getY(void);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
void	check(Point& a, Point& b, Point& c, Point& p);

#endif
