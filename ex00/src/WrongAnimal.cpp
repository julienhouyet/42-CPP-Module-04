/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 07:28:19 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 11:43:16 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) 
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& copy )
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    if (this != &copy) {
        this->_type = copy._type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::setType( std::string type )  
{
	this->_type = type;
}

std::string WrongAnimal::getType() const 
{
	return this->_type;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "Unknow WrongAnimal sound" << std::endl;
}