/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarDoubleConverter.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:45:48 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/08 12:46:05 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarDoubleConverter.h"
#include <iostream>
#include <stdexcept>

void ScalarDoubleConverter::printConvertedDouble(const std::string& literal)
{
	try 
	{
		double doubleValue = std::stod(literal);
		std::cout << "double: " << doubleValue;
		if (doubleValue - static_cast<int>(doubleValue) == 0)
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << "double: impossible" << std::endl;
	}
	catch (const std::out_of_range& e)
	{
		std::cout << "double: impossible" << std::endl;
	}
}
