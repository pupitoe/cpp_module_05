/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:19:36 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/26 02:15:19 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat tom("tom", 69);
		Form	form("polo signed", 56, 60);
		std::cout << form << std::endl;
		form.beSigned(tom);
		std::cout << form << std::endl;
		
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat tom("tomXXX", 40);
		Form	form("polo signed", 56, 60);
		std::cout << form << std::endl;
		form.beSigned(tom);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	form("polo signed", 0, 60);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	form("polo signed", 151, 60);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	form("polo signed", 150, 0);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	form("polo signed", 150, 151);
		std::cout << form << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat	tom("tom", 57);
		Bureaucrat	tom1("tom1", 55);
		Bureaucrat	tom2("tom2", 56);
		Form		form("polo signed", 56, 60);
		Form		form1("polo signed1", 56, 60);
		Form		form2("polo signed2", 56, 60);
		std::cout << form << std::endl;
		tom.signForm(form);
		std::cout << form << std::endl;
		tom1.signForm(form1);
		tom2.signForm(form2);
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		
		
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
