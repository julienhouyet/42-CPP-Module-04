/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:50:24 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 14:03:06 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( std::string ideas ) : _ideas(ideas)
{
	std::cout << "Brain constructor called" << std::endl;
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
        this->_ideas = copy._ideas;
    }
    return *this;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}