/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:28:46 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/15 14:25:41 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed&);
        Fixed(const int);
        Fixed(const float);
        Fixed& operator=(const Fixed&);
        ~Fixed();
        int	getRawBits(void);
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        bool operator>(const Fixed&) const;
        bool operator<(const Fixed&) const;
        bool operator>=(const Fixed&) const;
        bool operator<=(const Fixed&) const;
        bool operator==(const Fixed&) const;
        bool operator!=(const Fixed&) const;
        Fixed operator+(const Fixed&) const;
        Fixed operator-(const Fixed&) const;
        Fixed operator*(const Fixed&) const;
        Fixed operator/(const Fixed&) const;
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        static Fixed& min(Fixed&, Fixed&);
        static const Fixed& min(const Fixed&, const Fixed&);
        static Fixed& max(Fixed&, Fixed&);
        static const Fixed& max(const Fixed&, const Fixed&);

    private:
        int fixed_point;
        static const int frac_bits = 8;
};
        std::ostream& operator<<(std::ostream&, const Fixed&);

#endif