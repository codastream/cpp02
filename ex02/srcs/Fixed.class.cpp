/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 21:36:35 by fpetit            #+#    #+#             */
/*   Updated: 2025/07/26 15:17:20 by fpetit           ###   ########.fr       */
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

void	putnlgreen(std::string msg)
{
	std::cout << GREEN << msg << NC << std::endl;
}

Fixed::Fixed(void)
{
	_value = 0;
}

Fixed::Fixed(const int n)
{
	_value = n << _right_n;
}

Fixed::Fixed(const float n)
{
	_value = roundf(n * (1 << _right_n));
}

Fixed::Fixed(const Fixed& obj)
{
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	if (this != &obj)
		_value = obj.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed& other) const
{
	return (_value > other.getRawBits() );
}

bool	Fixed::operator<(const Fixed& other) const
{
	return (_value < other.getRawBits() );
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (_value >= other.getRawBits() );
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (_value <= other.getRawBits() );
}

bool	Fixed::operator==(const Fixed& other) const
{
	return (_value == other.getRawBits() );
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (_value != other.getRawBits() );
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	result.setRawBits(_value + other.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	result.setRawBits(_value - other.getRawBits());
	return (result);

}

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	double temp = (double) this->toFloat() * (double) other.toFloat();
	result.setRawBits(roundf(temp * (1 << _right_n)));
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	if (other.getRawBits() == 0)
		return (0);
	Fixed result;
	double temp = (double) this->toFloat() / (double) other.toFloat();
	result.setRawBits(roundf(temp * (1 << _right_n)));
	return (result);
}

Fixed&	Fixed::operator++(void)
{
	_value++;
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed result (*this);
	_value++;
	return (result);
}

Fixed	Fixed::operator--(int)
{
	Fixed result (*this);
	_value--;
	return (result);
}

Fixed::~Fixed(void)
{}

int		Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits( int const raw )
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

Fixed& Fixed::min (Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() <= f2.getRawBits())
		return (f1);
	return (f2);
}

const Fixed& Fixed::min (const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() <= f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed& Fixed::max (Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() >= f2.getRawBits())
		return (f1);
	return (f2);
}

const Fixed& Fixed::max (const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() >= f2.getRawBits())
		return (f1);
	return (f2);
}
