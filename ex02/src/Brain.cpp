/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:50:24 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 14:09:39 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain ( const Brain& copy )
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain& Brain::operator=( const Brain& copy )
{
	std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &copy) {
		for (int i = 0; i < 100; ++i)
		{
			this->_ideas[i] = copy._ideas[i];
		}
    }
    return *this;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}