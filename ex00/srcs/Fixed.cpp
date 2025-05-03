/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 21:36:35 by fpetit            #+#    #+#             */
/*   Updated: 2025/05/03 19:54:39 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	putnl(std::string msg)
{
	std::cout << msg << std::endl;
}

void	putnlgreen(std::string msg)
{
	std::cout << GREEN << msg << NC << std::endl;
}

Fixed::Fixed( void )
{
	putnl("Default constructor called");
	_value = 0;
}

Fixed::Fixed( const Fixed& obj )
{
	putnl("Copy constructor called");
	*this = obj;
}

Fixed& Fixed::operator=( const Fixed& obj )
{
	putnl("Copy assignment operator called");
	if (this != &obj)
	{
		_value = obj.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed( void )
{
	putnl("Destructor called");
}

int     Fixed::getRawBits( void ) const
{
	putnl("getRawBits member function called");
	return (_value);
}

void    Fixed::setRawBits( int const raw )
{
	putnl("setRawBits member function called");
	 _value = raw;
}