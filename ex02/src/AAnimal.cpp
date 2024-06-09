/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 07:28:19 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 15:22:01 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal( void ) 
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal( std::string type ) : _type(type)
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& copy )
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}

AAnimal& AAnimal::operator=( const AAnimal& copy )
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
    if (this != &copy) {
        this->_type = copy._type;
    }
    return *this;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::setType( std::string type )  
{
	this->_type = type;
}

std::string AAnimal::getType() const 
{
	return this->_type;
}

void AAnimal::makeSound( void ) const
{
	std::cout << "Unknow AAnimal sound" << std::endl;
}