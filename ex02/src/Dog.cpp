/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:20:44 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/10 16:23:36 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : AAnimal("Dog"), _Brain(new Brain)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_Brain = new Brain;
}

Dog::Dog( const Dog& copy ) : AAnimal(copy), _Brain(new Brain(*copy._Brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=( const Dog& copy )
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &copy) {
		AAnimal::operator=(copy);
		delete this->_Brain;
		this->_Brain = new Brain(*copy._Brain);
	}
	return *this;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_Brain;
}

void Dog::makeSound( void ) const
{
	std::cout << "Waouf ! Waouf ! Waouf !" << std::endl;
}