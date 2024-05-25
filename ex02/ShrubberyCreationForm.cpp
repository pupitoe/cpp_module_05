/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:12:27 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/25 17:24:23 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ):
	AForm("Shrubbery", 145, 137)
{
	
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		this->throwSigned();
	if (this->getGExecute() > executor.getGrade())
		this->throwExecute();

	this->makeTree(executor.getName());
}

void	ShrubberyCreationForm::makeTree(std::string target) const
{
	std::fstream	output;

	target += "_shrubbery";
	output.open(target.c_str(), std::fstream::out);
	if (output.fail() == 0)
	{
		
		output.close();
	}
}