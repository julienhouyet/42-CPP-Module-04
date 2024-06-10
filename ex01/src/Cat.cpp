/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:20:44 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/10 16:08:36 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_Brain = new Brain;
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
        delete _Brain;
        _Brain = new Brain(*copy._Brain);
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