/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:20:44 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 11:48:05 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( std::string type ) : WrongAnimal(type)
{
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& copy )
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=( const WrongCat& copy )
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this != &copy) {
        setType(copy.getType());
    }
    return *this;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "WrongCat sound" << std::endl;
}