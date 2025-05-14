/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:43:54 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/14 17:41:19 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"
#include <fstream>

std::string MySed::replaceLine(std::string line, std::string s1, std::string s2) {
		std::string result;
		std::string::size_type pos;
		std::string::size_type start_pos = 0;

		while ((pos = line.find(s1, start_pos)) != std::string::npos) {
			result.append(line, start_pos, pos - start_pos);
			result.append(s2);
			start_pos = pos + s1.length();
		}
		result.append(line, start_pos);
		return (result);
}

void MySed::editFIle() {
	std::ifstream input_file(_filename.c_str());
	if(!input_file) {
		return ;
	}
	
	std::ofstream output_file((_filename + ".replace").c_str());
	if(!output_file) {
		return ;
	}

	std::string line;
	while(std::getline(input_file, line)) {
		output_file << replaceLine(line, _s1, _s2) << std::endl;
	}
	
}
