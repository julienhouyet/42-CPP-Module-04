/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 07:29:19 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 11:18:07 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

int	main()
{
	const Animal* meta = new Animal();
	//const Animal* j = new Dog();
	//const Animal* i = new Cat();

	//std::cout << j->getType() << " " << std::endl;
	//std::cout << i->getType() << " " << std::endl;

	//i->makeSound();
	//j->makeSound();
	meta->makeSound();
	
	return 0;
}