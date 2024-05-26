/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:12:27 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/26 02:14:38 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ):
	AForm("Shrubbery", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cpy):
	AForm(cpy), _target(cpy._target)
{
	return ;	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm
	const& cpy)
{
	(void) cpy;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->checkExecute(executor);

	this->makeTree(this->_target);
}

void	ShrubberyCreationForm::makeTree(std::string target) const
{
	std::fstream	output;

	target += "_shrubbery";
	output.open(target.c_str(), std::fstream::out);
	if (output.fail() == 0)
	{
		output << "    oxoxoo    ooxoo  ";
		output << "     ";
		output << "    oxoxoo    ooxoo\n";
		output << "  ooxoxo oo  oxoxooo ";
		output << "     ";
		output << "  ooxoxo oo  oxoxooo\n";
		output << " oooo xxoxoo ooo ooox";
		output << "     ";
		output << " oooo xxoxoo ooo ooox\n";
		output << " oxo o oxoxo  xoxxoxo";
		output << "     ";
		output << " oxo o oxoxo  xoxxoxo\n";
		output << "  oxo xooxoooo o ooo ";
		output << "     ";
		output << "  oxo xooxoooo o ooo\n";
		output << "    ooo\\oo\\  /o/o    ";
		output << "     ";
		output << "    ooo\\oo\\  /o/o\n";
		output << "        \\  \\/ /      ";
		output << "     ";
		output << "        \\  \\/ /\n";
		output << "         |   /       ";
		output << "     ";
		output << "         |   /\n";
		output << "         |  |        ";
		output << "     ";
		output << "         |  |\n";
		output << "         | D|        ";
		output << "     ";
		output << "         | D|\n";
		output << "         |  |        ";
		output << "     ";
		output << "         |  |\n";
		output << "         |  |        ";
		output << "     ";
		output << "         |  |\n";
		output << "  ______/____\\____   ";
		output << "     ";
		output << "  ______/____\\____\n";
		output.close();
	}
}
