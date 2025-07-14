/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 21:36:35 by fpetit            #+#    #+#             */
/*   Updated: 2025/07/14 20:01:48 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

void	putnl(std::string msg)
{
	std::cout << msg << std::endl;
}

void	putnlcol(std::string col, std::string msg)
{
	std::cout << col << msg << NC << std::endl;
}

Fixed::Fixed(void)
{
	putnl("Default constructor called");	
	_value = 0;
}

Fixed::Fixed(const int n)
{
	putnl("Int constructor called");
	_value = n << _right_n;
}

Fixed::Fixed(const float n)
{
	putnl("Float constructor called");
	_value = roundf(n * (1 << _right_n));
}

Fixed::Fixed(const Fixed& obj)
{
	putnl("Copy constructor called");
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	putnl("Copy assignment operator called");
	if (this != &obj)
	{
		_value = obj.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(void)
{
	putnl("Destructor called");
}

int     Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	 _value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float) _value / (1 << _right_n));
}

int		Fixed::toInt(void) const
{
	return (_value >> _right_n);
}