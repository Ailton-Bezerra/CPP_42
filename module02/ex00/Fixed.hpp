/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:48:02 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/16 12:53:34 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int _fpValue;
		static const int _fractinalBits = 8;

};

#endif