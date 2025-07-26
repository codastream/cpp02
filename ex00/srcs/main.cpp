/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:21:53 by fpetit            #+#    #+#             */
/*   Updated: 2025/07/26 14:47:30 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int	main(void)
{
	
	putnlcol(MAGENTA, "a - default constructor");
	Fixed a;
	std::cout << a.getRawBits() << std::endl;
	putnlcol(MAGENTA, "b(a) - copy constructor");
	Fixed b(a);
	std::cout << b.getRawBits() << std::endl;
	putnlcol(MAGENTA, "c = b - assignent operator");
	Fixed c;
	c = b;
	std::cout << c.getRawBits() << std::endl;
	putnlcol(MAGENTA, "c.setRawbits(42) - setter");
	c.setRawBits(42);
	std::cout << c.getRawBits() << std::endl;
}
