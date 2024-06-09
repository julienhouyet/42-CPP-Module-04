/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:20:42 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 15:23:27 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_H__
#define __CAT_H__

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat( void );
		Cat( std::string type );
		Cat( const Cat& copy );
		Cat& operator=( const Cat& copy );
		~Cat( void );

		void makeSound( void ) const;

	private:
		Brain* _Brain;
};

#endif