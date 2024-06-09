/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 07:28:25 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 15:15:54 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>

class Animal {
	public:
		virtual ~Animal( void );

		void setType( std::string type );

		std::string getType() const;

		virtual void makeSound() const;

	protected:
		Animal( void );
		Animal( std::string type );
		Animal( const Animal& copy );
		Animal& operator=( const Animal& copy );

		std::string _type;
};

#endif