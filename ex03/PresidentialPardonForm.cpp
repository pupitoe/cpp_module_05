/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:10:22 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/27 19:08:25 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):
	AForm("presidential pardon", 25, 5), _target("")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target):
	AForm("presidential pardon", 25, 5), _target(target)
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

PresidentialPardonForm	*PresidentialPardonForm::clone(
		std::string const& target) const
{
	PresidentialPardonForm	*clone;

	clone = NULL;
	try
	{
		clone = new PresidentialPardonForm(target);
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (clone);
}
