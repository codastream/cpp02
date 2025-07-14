/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:21:53 by fpetit            #+#    #+#             */
/*   Updated: 2025/07/14 23:14:25 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

void	testComparison (void)
{
	const Fixed a (12.34f);
	const Fixed b (-10);
	const Fixed c (b);
	const Fixed zero (0);

	putnlgreen("=== Comparison [a = 12.34, b = -10, c = b]");
	std::cout << "a < b\t=> " << (a < b ? "true" : "false") << std::endl;
	std::cout << "b <= c\t=> " << (a <= b ? "true" : "false") << std::endl;
	std::cout << "a > b\t=> " << (a > b ? "true" : "false") << std::endl;
	std::cout << "a >= b\t=> " << (a >= b ? "true" : "false") << std::endl;
	std::cout << "b == c\t=> " << (b == c ? "true" : "false") << std::endl;
	std::cout << "b != c\t=> " << (b != c ? "true" : "false") << std::endl;
}

void	testArithmetic (void)
{
	const Fixed a(12.34f);
	const Fixed b(-10);
	const Fixed zero (0);

	putnlgreen("=== Arithmetic [a = 12.34 b = -10]");
	std::cout << "a + b\t=> " << (a + b).toFloat() << std::endl;
	std::cout << "a - b\t=> " << (a - b).toFloat() << std::endl;
	std::cout << "a * b\t=> " << (a * b).toFloat() << std::endl;
	std::cout << "a / b\t=> " << (a / b).toFloat() << std::endl;
	std::cout << "a / zero => " << (a / zero).toFloat() << std::endl;
}

void	testIncrement (void)
{
	Fixed a(12.34f);
	Fixed b(12.34f);
	Fixed c(12.34f);
	Fixed d(12.34f);

	putnlgreen("=== Increment [a = b = c = d = 12.34]");
	std::cout << "a++ =>" << (a++).toFloat() << std::endl;
	std::cout << "b-- =>" << (b--).toFloat() << std::endl;
	std::cout << "++c =>" << (++c).toFloat() << std::endl;
	std::cout << "--d =>" << (--d).toFloat() << std::endl;
}

void	testMinMax(void)
{
	const Fixed a(12.34f );
	const Fixed b(-10);
	Fixed c(12.34f);
	Fixed d(-10);

	putnlgreen("=== Min and Max [a = 12.34, b = -10]");
	std::cout << "min (a,b) const\t" << Fixed::min(a, b).toFloat() << std::endl;
	std::cout << "max (a.b) const\t" << Fixed::max(a, b).toFloat() << std::endl;
	std::cout << "min (a,b)\t" << Fixed::min(c, d).toFloat() << std::endl;
	std::cout << "max (a,b)\t" << Fixed::max(c, d).toFloat() << std::endl;
}

void	testEx(void)
{
	Fixed a;
	const Fixed b(Fixed(5.05f) * Fixed(2));

	putnlgreen("=== Provided test [a = default, b = 5.05 * 2]");
	std::cout << "a\t" << a << std::endl;
	std::cout << "++a\t" << ++a << std::endl;
	std::cout << "a\t" << a << std::endl;
	std::cout << "a++\t" << a++ << std::endl;
	std::cout << "a\t" << a << std::endl;
	std::cout << "b\t" << b << std::endl;
	std::cout << "max(a,b)" << Fixed::max( a, b ) << std::endl;
}

int	main(void)
{
	testEx();
	testArithmetic();
	testComparison();
	testIncrement();
	testMinMax();
	return 0;
}
