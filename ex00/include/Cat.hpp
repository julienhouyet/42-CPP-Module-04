/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:20:42 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 11:47:29 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( std::string type );
		Cat( const Cat& copy );
		Cat& operator=( const Cat& copy );
		~Cat( void );

		void makeSound( void ) const;
};

#endif