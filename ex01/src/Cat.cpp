/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:20:44 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/11 17:48:36 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : Animal("Cat"), _Brain(new Brain)
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat& copy ) : Animal(copy), _Brain(new Brain(*copy._Brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=( const Cat& copy )
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &copy) {
		Animal::operator=(copy);
		delete this->_Brain; 
		this->_Brain = new Brain(*copy._Brain);
	}
	return *this;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_Brain;
}

void Cat::makeSound( void ) const
{
	std::cout << "Miaaaaaaaouuuuuuuuw !" << std::endl;
}