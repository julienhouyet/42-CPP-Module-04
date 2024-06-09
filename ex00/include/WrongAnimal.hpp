/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 07:28:25 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 11:50:36 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONG_WrongAnimal_H__
#define __WRONG_WrongAnimal_H__

#include <string>

class WrongAnimal {
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal& copy );
		WrongAnimal& operator=( const WrongAnimal& copy );
		~WrongAnimal( void );

		void setType( std::string type );

		std::string getType() const;

		virtual void makeSound() const;

	private:
		std::string _type;
};

#endif