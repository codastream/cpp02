/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:21:53 by fpetit            #+#    #+#             */
/*   Updated: 2025/07/14 20:15:06 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <bitset>

int	main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	Fixed e;

	a = Fixed(1234.4321f);
	e.setRawBits(128);
	putnlcol(MAGENTA, "raw bits");
	std::cout << "a raw bits are " << std::bitset<32>(a.getRawBits()) << std::endl;
	std::cout << "b raw bits are " << std::bitset<32>(b.getRawBits()) << std::endl;
	std::cout << "c raw bits are " << std::bitset<32>(c.getRawBits()) << std::endl;
	std::cout << "d raw bits are " << std::bitset<32>(d.getRawBits()) << std::endl;
	std::cout << "e raw bits are " << std::bitset<32>(e.getRawBits()) << std::endl;
	putnlcol(MAGENTA, "float value");
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	putnlcol(MAGENTA, "int value");
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;
	return 0;
}
