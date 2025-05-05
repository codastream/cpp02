/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:47:43 by fpetit            #+#    #+#             */
/*   Updated: 2025/05/05 16:55:51 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <string>

class Point
{
private:
	int	_x;
	int	_y;

public:

	Point( void );
	Point( int x, int y );
	Point( Point& p );
	Point& operator= (const Point& p );
	~Point( void );
	int	getX( void );
	int	getY( void );

}

#endif
