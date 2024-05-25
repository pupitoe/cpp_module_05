/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:20:08 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/24 19:35:47 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat( std::string const name, int const grade ): name(name)
{
	this->throwGrade(grade);
	this->grade = grade;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const& cpy ): name(cpy.name)
{
	*this = cpy;
}

Bureaucrat&	Bureaucrat::operator=( Bureaucrat const& cpy )
{
	this->grade = cpy.grade;
	return (*this);
}

std::string	Bureaucrat::getName( void ) const
{
	return (this->name);
}

int	Bureaucrat::getGrade( void ) const
{
	return (this->grade);
}

void	Bureaucrat::downGrade( int down )
{
	int	tmp;

	tmp = 0;
	if (down >= 0 && down <= 150)
	{
		tmp = this->grade + down;
		this->throwGrade(tmp);
		if (tmp > 0 && tmp <= 150)
			this->grade = tmp;
	}
	else
		this->throwGrade(tmp);
		
}

void	Bureaucrat::upGrade( int up )
{
	int	tmp;

	tmp = 0;
	if (up >= 0 && up <= 150)
	{
		tmp = this->grade - up;
		this->throwGrade(tmp);
		if (tmp > 0 && tmp <= 150)
			this->grade = tmp;
	}
	else
		this->throwGrade(tmp);
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& bureau)
{
	o << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << ".";
	return (o);
}

void	Bureaucrat::throwGrade( int const grade )const
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is to Low min is 150");
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is to High max is 1");
}

void	Bureaucrat::signForm(Form& form)
{
	if (this->grade <= form.getGSigned())
	{
		std::cout << this->name << " signed " << form.getName() << std::endl;
		form.beSigned(*this);
	}
	else
		std::cout << this->name << " couldn't sign " << form.getName()
			<< " because grade is to low" << std::endl;
}