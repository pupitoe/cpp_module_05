/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:19:36 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/26 02:14:54 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	try
	{
		Bureaucrat tom("tom", 5);
		RobotomyResquestForm	form("hello");
		std::cout << form << std::endl;
		form.beSigned(tom);
		std::cout << form << std::endl;
		form.execute(tom);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat tom("tom", 150);
		RobotomyResquestForm	form("hello");
		std::cout << form << std::endl;
		form.beSigned(tom);
		std::cout << form << std::endl;
		form.execute(tom);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat tom("tom", 5);
		RobotomyResquestForm	form("hello");
		form.execute(tom);
		std::cout << form << std::endl;
		form.beSigned(tom);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "<----------------------------------->" << std::endl;
	try
	{
		Bureaucrat tom("tom", 28);
		Bureaucrat tomexec("tom exec", 42);
		
		ShrubberyCreationForm	form("kiwi kosmic");
		std::cout << form << std::endl;
		form.beSigned(tom);
		std::cout << form << std::endl;
		form.execute(tomexec);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat tom("tom", 28);
		Bureaucrat tomexec("tom exec", 42);
		
		ShrubberyCreationForm	form("kiwi kosmic");
		std::cout << form << std::endl;
		tom.signForm(form);
		std::cout << form << std::endl;
		tom.executeForm(form);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "<----------------------------------->" << std::endl;
	try
	{
		Bureaucrat tom("tom", 59);
		Bureaucrat tomexec("tom exec", 42);
		
		PresidentialPardonForm	form("kiwi kosmic");
		std::cout << form << std::endl;
		tom.signForm(form);
		std::cout << form << std::endl;
		tomexec.executeForm(form);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat tom("tom", 25);
		Bureaucrat tomexec("tom exec", 56);
		
		PresidentialPardonForm	form("kiwi kosmic");
		std::cout << form << std::endl;
		tom.executeForm(form);
		std::cout << form << std::endl;
		tomexec.signForm(form);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat tom("tom", 25);
		Bureaucrat tomexec("tom exec", 5);
		
		PresidentialPardonForm	form("kiwi kosmic");
		std::cout << form << std::endl;
		tom.signForm(form);
		std::cout << form << std::endl;
		tomexec.executeForm(form);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
