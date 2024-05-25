/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:11:18 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/25 22:41:06 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyResquestForm::RobotomyResquestForm(std::string const target):
	AForm("Roboto", 72, 45), _target(target)
{
	return ;
}

RobotomyResquestForm::~RobotomyResquestForm( void )
{
	return ;
}

RobotomyResquestForm::RobotomyResquestForm(RobotomyResquestForm const& cpy):
	AForm(cpy), _target(cpy._target)
{
	return ;	
}

RobotomyResquestForm& RobotomyResquestForm::operator=(RobotomyResquestForm
	const& cpy)
{
	(void) cpy;
	return (*this);
}

void	RobotomyResquestForm::execute(Bureaucrat const & executor) const
{
	this->checkExecute(executor);

	std::srand(std::time(NULL));
	std::cout << "BRRRRRRRRRRRRRRRRRRRRRRRRR.........." << std::endl;
	std::cout << this->_target << " your robotisation are " <<
		((std::rand() % 2) ? "sucess" : "fail") << std::endl;
}