/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:50:27 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/09 14:09:28 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>

class Brain
{
	public:
		Brain( void );
		Brain ( const Brain& copy );
		Brain& operator=( const Brain& copy );
		~Brain( void );

	private:
		std::string _ideas[100];
};

#endif