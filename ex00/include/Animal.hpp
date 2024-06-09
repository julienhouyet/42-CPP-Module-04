/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 07:28:25 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 11:15:27 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>

class Animal {
	public:
		Animal( void );
		Animal( std::string type );
		Animal( const Animal& copy );
		Animal& operator=( const Animal& copy );
		~Animal( void );

		void setType( std::string type );

		std::string getType() const;

		void makeSound() const;

	private:
		std::string _type;
};

#endif