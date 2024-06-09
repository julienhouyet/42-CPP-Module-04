/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 07:28:25 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 15:23:13 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AANIMAL_H__
#define __AANIMAL_H__

#include <string>

class AAnimal {
	public:
		virtual ~AAnimal( void );

		void setType( std::string type );

		std::string getType() const;

		virtual void makeSound() const;

	protected:
		AAnimal( void );
		AAnimal( std::string type );
		AAnimal( const AAnimal& copy );
		AAnimal& operator=( const AAnimal& copy );

		std::string _type;
};

#endif