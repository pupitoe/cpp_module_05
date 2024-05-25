/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 23:23:56 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/26 01:22:57 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ): pre("cpy"), rob("cpy"), shru("cpy")
{
	this->tab[0] = &pre;
	this->tab[1] = &rob;
	this->tab[2] = &shru;
	return ;
}

Intern::~Intern( void )
{
	return ;
}

Intern::Intern( Intern const& cpy ): pre("cpy"), rob("cpy"), shru("cpy")
{
	(void)cpy;
	return ;
}

Intern&	Intern::operator=( Intern const& cpy )
{
	(void)cpy;
	return (*this);
}

AForm	*Intern::makeForm( std::string const& name,
	std::string const& target ) const
{
	int	i;
	AForm	*form;
	
	i = 0;
	form = NULL;
	while (i < SIZE_FORM && form == NULL)
	{
		if (this->tab[i]->getName() == name)
			form = this->tab[i]->clone(target);
	}
	return (form);
}