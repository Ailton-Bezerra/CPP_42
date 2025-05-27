/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:07:30 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/27 15:58:40 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	std::cout << "\n===== CREAT AND DESTROY (NO LEAKS) =====" << std::endl;
	int array_len = 6;
	AAnimal* animals[array_len];

	for (int i = 0; i < array_len / 2; i++)
		animals[i] = new Dog();
	for (int i = array_len / 2; i < array_len; i++)
		animals[i] = new Cat();
	
	std::cout << std::endl;
	for (int i = 0; i < array_len; i++)
		delete animals[i];
	std::cout << "========================================\n" << std::endl;

	std::cout << "========== CHECK_DEEP_COPIES ===========" << std::endl;
	std::cout << "\n**COPIES**" << std::endl;
	Cat lion = Cat();
	Dog wolf = Dog();
	
	std::cout << std::endl;
	Cat lion_copy = lion;
	Dog wolf_copy = wolf;
	
	std::cout << std::endl;
	lion.setIdea("original lion idea", 0);
	lion_copy.setIdea("copy lion idea", 0);
	wolf.setIdea("original wolf idea", 0);
	wolf_copy.setIdea("copy wolf idea", 0);

	std::cout << "Original Lion: " << lion.getIdea(0) << std::endl;
	std::cout << "Copy Lion: " << lion_copy.getIdea(0) << std::endl << std::endl;
	std::cout << "Original Wolf: " << wolf.getIdea(0) << std::endl;
	std::cout << "Copy Wolf: " << wolf_copy.getIdea(0) << std::endl;

	std::cout << "\n**ATRIBUITIONS**" << std::endl;
	Cat panther = Cat();
	Dog dire_wolf = Dog();
	
	std::cout << std::endl;
	Cat panther_copy = Cat();
	Dog dire_wolf_copy = Dog();

	std::cout << std::endl;
	panther_copy = panther;
	dire_wolf_copy = dire_wolf;
	
	std::cout << std::endl;
	panther.setIdea("original panther idea", 0);
	panther_copy.setIdea("copy panther idea", 0);
	dire_wolf.setIdea("original dire_wolf idea", 0);
	dire_wolf_copy.setIdea("copy dire_wolf idea", 0);

	std::cout << "Original panther: " << panther.getIdea(0) << std::endl;
	std::cout << "Copy panther: " << panther_copy.getIdea(0) << std::endl << std::endl;
	std::cout << "Original dire_Wolf: " << dire_wolf.getIdea(0) << std::endl;
	std::cout << "Copy dire_Wolf: " << dire_wolf_copy.getIdea(0) << std::endl;
	std::cout << "========================================" << std::endl;

	// AAnimal* test = new AAnimal();
	panther.makeSound();
	dire_wolf.makeSound();
	
	return (0);
}
