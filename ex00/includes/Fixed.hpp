/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetit <fpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 00:19:26 by fpetit            #+#    #+#             */
/*   Updated: 2025/05/03 20:11:43 by fpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

# define NC   "\033[0m"
# define BLACK   "\033[30m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"

void	putnlgreen(std::string msg);
void	putnl(std::string msg);

class Fixed
{

private:
    int                 _value;
    static const int    _right_n = 8;
    
public:
    Fixed( void );
    Fixed( const Fixed& obj );
    Fixed& operator=( const Fixed& obj );
    ~Fixed ( void );

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

};


#endif
