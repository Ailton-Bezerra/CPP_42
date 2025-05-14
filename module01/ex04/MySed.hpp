/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:57:52 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/14 17:09:27 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSED_HPP
#define MYSED_HPP

#include <iostream>

class MySed {
	public:
		MySed(std::string filename, std::string s1, std::string s2)
			: _filename(filename), _s1(s1), _s2(s2) {};
		~MySed(){};

		void editFIle();
		
	private:
		const std::string _filename;
		const std::string _s1;
		const std::string _s2;

		std::string replaceLine(std::string line, std::string s1, std::string s2);
};

#endif