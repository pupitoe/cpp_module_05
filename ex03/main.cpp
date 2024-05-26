/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:19:36 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/26 17:43:49 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main( void )
{
	Intern	withOutSalary;
	AForm	*presiden;
	AForm	*robot;
	AForm	*shrubbery;
	AForm	*doNotExist;

	presiden = withOutSalary.makeForm("presidential pardon", "mirael");
	robot = withOutSalary.makeForm("robotomy resquest", "chris");
	shrubbery = withOutSalary.makeForm("shrubbery creation", "in tom");
	doNotExist = withOutSalary.makeForm("flo is a float ?", "bed in to bed");
	
	if (presiden)
	{
		try
		{
			Bureaucrat	tomy("tommy", 16);
			tomy.signForm(*presiden);
			tomy.executeForm(*presiden);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			Bureaucrat	tomy("tommy", 16);
			tomy.executeForm(*presiden);
			tomy.signForm(*presiden);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			Bureaucrat	tomy("tommy", 70);
			tomy.executeForm(*presiden);
			tomy.signForm(*presiden);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete presiden;
	}
	if (robot)
	{
		try
		{
			Bureaucrat	tomy("General robot", 16);
			tomy.signForm(*robot);
			tomy.executeForm(*robot);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete robot;
	}
	if (shrubbery)
	{
		try
		{
			Bureaucrat	tomy("Ice in to plastic", 16);
			tomy.signForm(*shrubbery);
			tomy.executeForm(*shrubbery);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete shrubbery;
	}
	std::cout << "ptr pf DoNotExist: " << doNotExist << std::endl;
}
