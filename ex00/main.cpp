/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:19:36 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/22 15:43:59 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat tt ("polo", 5555);
		tt.upGrade(10);
		std::cout << tt << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat toma("toma", 5);
		std::cout << toma << std::endl;
		toma.downGrade(1);
		std::cout << toma << std::endl;
		toma.upGrade(3);
		std::cout << toma << std::endl;
		toma.upGrade(2);
		std::cout << toma << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat tomaTheTrain("toma2", 1);
		std::cout << tomaTheTrain << std::endl;
		tomaTheTrain.downGrade(150);
		std::cout << tomaTheTrain << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat tomaTheTrain("toma3", 150);
		std::cout << tomaTheTrain << std::endl;
		tomaTheTrain.upGrade(150);
		std::cout << tomaTheTrain << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat tomaTheTrain("toma3", 100);
		std::cout << tomaTheTrain << std::endl;
		tomaTheTrain.upGrade(1500);
		std::cout << tomaTheTrain << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
