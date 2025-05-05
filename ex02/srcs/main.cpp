/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:21:53 by fpetit            #+#    #+#             */
/*   Updated: 2025/05/05 14:59:01 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



void	testComparison ( void )
{
	Fixed const a (12.34f );
	Fixed const b ( -10 );
	Fixed const c ( b );
	Fixed const zero ( 0 );

	std::cout << "a < b ? " << (a < b ? "true" : "false") << std::endl;
	std::cout << "b <= c" << (a <= b ? "true" : "false") << std::endl;
	std::cout << "a > b" << (a > b ? "true" : "false") << std::endl;
	std::cout << "a >= b" << (a >= b ? "true" : "false") << std::endl;
	std::cout << "b == c" << (b == c ? "true" : "false") << std::endl;
	std::cout << "b != c" << (b != c ? "true" : "false") << std::endl;
}

void	testArithmetic ( void )
{
	Fixed const a (12.34f );
	Fixed const b ( -10 );
	Fixed const zero ( 0 );
	std::cout << "a + b" << (a + b).toFloat() << std::endl;
	std::cout << "a - b" << (a - b).toFloat() << std::endl;
	std::cout << "a * b" << (a * b).toFloat() << std::endl;
	std::cout << "a / b" << (a / b).toFloat() << std::endl;
	std::cout << "a / zero" << (a / zero).toFloat() << std::endl;
}

void	testIncrement ( void )
{
	Fixed const a (12.34f );

	std::cout << "a++" << (a++).toFloat() << std::endl;
	std::cout << "a--" << (a--).toFloat() << std::endl;
	std::cout << "++a" << (++a).toFloat() << std::endl;
	std::cout << "--a" << (--a).toFloat() << std::endl;
}

void	testMinMax( void )
{
	Fixed const a (12.34f );
	Fixed const b ( -10 );
	Fixed	c(12.34f);
	Fixed	d(10);

	std::cout << "min const" << Fixed::min(a, b).toFloat() << std::endl;
	std::cout << "max const" << Fixed::max(a, b).toFloat() << std::endl;
	std::cout << "min" << Fixed::min(c, d).toFloat() << std::endl;
	std::cout << "max" << Fixed::min(c, d).toFloat() << std::endl;
}

int	main( void )
{
    // Fixed a;
    // Fixed const b( 10 );
    // Fixed const c( 42.42f );
    // Fixed const d( b );

    // a = Fixed( 1234.4321f );
    // std::cout << "a is " << a << std::endl;
    // std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;
    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	testArithmetic();
	testComparison();
	testIncrement();
	testMinMax();
    return 0;
}
