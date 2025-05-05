/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:21:53 by fpetit            #+#    #+#             */
/*   Updated: 2025/05/05 16:44:42 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

void	testComparison ( void )
{
	Fixed const a (12.34f );
	Fixed const b ( -10 );
	Fixed const c ( b );
	Fixed const zero ( 0 );

	putnlgreen("=== Comparison [a = 12.34, b = -10, c = b]");
	std::cout << "a < b\t=> " << (a < b ? "true" : "false") << std::endl;
	std::cout << "b <= c\t=> " << (a <= b ? "true" : "false") << std::endl;
	std::cout << "a > b\t=> " << (a > b ? "true" : "false") << std::endl;
	std::cout << "a >= b\t=> " << (a >= b ? "true" : "false") << std::endl;
	std::cout << "b == c\t=> " << (b == c ? "true" : "false") << std::endl;
	std::cout << "b != c\t=> " << (b != c ? "true" : "false") << std::endl;
}

void	testArithmetic ( void )
{
	Fixed a (12.34f );
	Fixed b ( -10 );
	Fixed zero ( 0 );

	putnlgreen("=== Arithmetic [a = 12.34 b = -10]");
	std::cout << "a + b\t=> " << (a + b).toFloat() << std::endl;
	std::cout << "a - b\t=> " << (a - b).toFloat() << std::endl;
	std::cout << "a * b\t=> " << (a * b).toFloat() << std::endl;
	std::cout << "a / b\t=> " << (a / b).toFloat() << std::endl;
	std::cout << "a / zero => " << (a / zero).toFloat() << std::endl;
}

void	testIncrement ( void )
{
	Fixed a (12.34f );
	Fixed b (12.34f );
	Fixed c (12.34f );
	Fixed d (12.34f );

	putnlgreen("=== Increment [a = 12.34]");
	std::cout << "a++ =>" << (a++).toFloat() << std::endl;
	std::cout << "b-- =>" << (b--).toFloat() << std::endl;
	std::cout << "++c =>" << (++c).toFloat() << std::endl;
	std::cout << "--d =>" << (--d).toFloat() << std::endl;
}

void	testMinMax( void )
{
	Fixed const a (12.34f );
	Fixed const b ( -10 );
	Fixed	c(12.34f);
	Fixed	d(-10);

	putnlgreen("=== Min and Max [a = 12.34, b = -10]");
	std::cout << "min (a,b) const\t" << Fixed::min(a, b).toFloat() << std::endl;
	std::cout << "max (a.b) const\t" << Fixed::max(a, b).toFloat() << std::endl;
	std::cout << "min (a,b)\t" << Fixed::min(c, d).toFloat() << std::endl;
	std::cout << "max (a,b)\t" << Fixed::max(c, d).toFloat() << std::endl;
}

void	testEx( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}


int	main( void )
{
	testEx();
	testArithmetic();
	testComparison();
	testIncrement();
	testMinMax();
    return 0;
}
