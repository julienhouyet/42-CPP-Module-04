/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 07:28:19 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 11:13:01 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( void ) 
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( const Animal& copy )
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal& Animal::operator=( const Animal& copy )
{
	std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &copy) {
        this->_type = copy._type;
    }
    return *this;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::setType( std::string type )  
{
	this->_type = type;
}

std::string Animal::getType() const 
{
	return this->_type;
}

void Animal::makeSound( void ) const
{
	std::cout << "Unknow animal sound" << std::endl;
}