/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:21:53 by fpetit            #+#    #+#             */
/*   Updated: 2025/05/06 15:42:54 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

void	check(Point& a, Point& b, Point& c, Point& p)
{
	bool	in;

	in = bsp(a, b, c, p);

	std::cout << "Point p (" << p.getX() << ", " << p.getY() << ") is ";
	if (!in)
		std::cout << RED << "not in " << NC;
	if (in)
		std::cout << GREEN << "in " << NC;
	std::cout << "triangle."  << std::endl;
}

int	main( void )
{
	Point	a = Point(0, 0);
	Point	b = Point(0, 5);
	Point	c = Point(5, 0);
	Point	out = Point(0, -4);
	Point	on = Point(0, 0);
	Point	in = Point(1, 2);

	check(a, b, c, out);
	check(a, b, c, on);
	check(a, b, c, in);

    return 0;
}
