/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:20:08 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/21 19:40:53 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat( std::string const name, int const grad ): name(name)
{
	this->grade = grad;
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

	if (down >= 0 && down <= 150)
	{
		tmp = this->grade + down;
		if (tmp > 0 && tmp <= 150)
			this->grade = tmp;
	}
}

void	Bureaucrat::upGrade( int up )
{
	int	tmp;

	if (up >= 0 && up <= 150)
	{
		tmp = this->grade - up;
		if (tmp > 0 && tmp <= 150)
			this->grade = tmp;
	}
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& bureau)
{
	o << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << ".";
	return (o);
}
