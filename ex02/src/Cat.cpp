/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:20:44 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 15:24:10 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : AAnimal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_Brain = new Brain;
}

Cat::Cat( std::string type ) : AAnimal(type)
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( const Cat& copy )
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=( const Cat& copy )
{
	std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &copy) {
        setType(copy.getType());
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