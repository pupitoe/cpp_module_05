/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:20:19 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/24 19:17:22 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const name, int const g_signed, int const g_execute):
	_name(name), _grade_signed(g_signed), _grade_execute(g_execute)
{
	this->throwGrade(g_signed);		
	this->throwGrade(g_execute);		
	this->_signed = 0;
}

AForm::~AForm(void)
{
	return ;
}

AForm::AForm(AForm const& cpy): _name(cpy._name),
	_grade_signed(cpy._grade_signed), _grade_execute(cpy._grade_execute)
{
	this->_signed = cpy._signed;
	return ;
}

AForm&	AForm::operator=(AForm const& cpy)
{
	(void)cpy;
	return (*this);
}

int	AForm::getGExecute(void) const
{
	return (this->_grade_execute);
}

int	AForm::getGSigned(void) const
{
	return (this->_grade_signed);
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

AForm::GradeTooLowException::GradeTooLowException(char const* reson):
	_reson(reson)
{
	return ;
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return (this->_reson);
}

AForm::GradeTooHighException::GradeTooHighException(char const* reson):
	_reson(reson)
{
	return ;
}

void		AForm::beSigned(Bureaucrat const& bur)
{
	if (bur.getGrade() <= this->_grade_signed)
		this->_signed = 1;
	else
		throw AForm::GradeTooLowException("Grade to Signe this is to low");
}

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return (this->_reson);
}

void	AForm::throwGrade( int const grade ) const
{
	if (grade > 150)
		throw
			AForm::GradeTooLowException("Grade is to Low min is 150 or signed");
	else if (grade < 1)
		throw AForm::GradeTooHighException("Grade is to High max is 1");
}

std::ostream&	operator<<(std::ostream& o, AForm const& form)
{
	o << "From info, name: " << form.getName() << ", signed: "
		<< ((form.getSigned()) ? "yes" : "no") << ", grade to signe: "
		<< form.getGSigned() << ", grade to execute: " << form.getGExecute();
	return (o);
}

const char	*AForm::IsNotSigned::what(void) const throw()
{
	return ("This form is not signed :(");
}

void	AForm::throwExecute(void) const
{
	throw	AForm::
		GradeTooLowException("Your grade is to low to execute this Form");
}

void	AForm::throwSigned(void) const
{
	throw AForm::IsNotSigned();
}
