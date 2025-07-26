/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 21:36:35 by fpetit            #+#    #+#             */
/*   Updated: 2025/07/26 14:25:08 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

void	putnl(const std::string msg)
{
	std::cout << msg << std::endl;
}

void	putnlgreen(const std::string msg)
{
	std::cout << GREEN << msg << NC << std::endl;
}

void	putnlcol(const std::string col, const std::string msg)
{
	std::cout << col << msg << NC << std::endl;
}

Fixed::Fixed(void) : _value(0)
{
	putnl("Default constructor called");
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

int		Fixed::getRawBits(void) const
{
	putnl("getRawBits member function called");
	return (_value);
}

void	Fixed::setRawBits(const int raw)
{
	putnl("setRawBits member function called");
	 _value = raw;
}