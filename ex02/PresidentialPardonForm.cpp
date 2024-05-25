/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:10:22 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/25 23:34:09 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target):
	AForm("Roboto", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm
	const& cpy): AForm(cpy), _target(cpy._target)
{
	return ;	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm
	const& cpy)
{
	(void) cpy;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->checkExecute(executor);

	std::cout << this->_target <<
		" you have been pardoned by Zaphod Beeblebrox. " << std::endl;
}
