/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:20:19 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/24 15:58:57 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(std::string const name, int const g_signed, int const g_execute):
	_name(name), _grade_signed(g_signed), _grade_execute(g_execute)
{
	this->throwGrade(g_signed);		
	this->throwGrade(g_execute);		
}

Form::~Form(void)
{
	return ;
}

Form::Form(Form const& cpy): _name(cpy._name),
	_grade_signed(cpy._grade_signed), _grade_execute(cpy._grade_execute)
{
	this->_signed = cpy._signed;
	return ;
}

Form&	Form::operator=(Form const& cpy)
{
	(void)cpy;
	return (*this);
}

int	Form::getGExecute(void) const
{
	return (this->_grade_execute);
}

int	Form::getGSigned(void) const
{
	return (this->_grade_signed);
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

Form::GradeTooLowException::GradeTooLowException(char const* reson):
	_reson(reson)
{
	return ;
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return (this->_reson);
}

Form::GradeTooHighException::GradeTooHighException(char const* reson):
	_reson(reson)
{
	return ;
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return (this->_reson);
}

void	Form::throwGrade( int const grade )const
{
	if (grade > 150)
		throw
			Form::GradeTooLowException("Grade is to Low min is 150 or signed");
	else if (grade < 1)
		throw Form::GradeTooHighException("Grade is to High max is 1");
}