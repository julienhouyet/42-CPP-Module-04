/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:20:42 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 15:23:31 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DOG_H__
#define __DOG_H__

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog( void );
		Dog( std::string type );
		Dog( const Dog& copy );
		Dog& operator=( const Dog& copy );
		~Dog( void );

		void makeSound( void ) const;

	private:
		Brain* _Brain;
};

#endif