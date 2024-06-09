/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 07:29:19 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 15:00:56 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main()
{
	int animalCount = 10;
	Animal* animals[animalCount];
	
	for (int i = 0; i < (animalCount / 2); ++i) {
		std::cout << "Dog " << i << " created" << std::endl;
		animals[i] = new Dog();
	}
	
	for (int i = animalCount / 2; i < animalCount; ++i) {
		std::cout << "Cat " << i << " created" << std::endl;
		animals[i] = new Cat();
	}

	for (int i = animalCount; i >= 0; --i)
	{
		delete animals[i];
	}
}