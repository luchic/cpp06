/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarIntConverter.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 11:37:20 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/09 15:24:25 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarIntConverter.h"
#include "../includes/ScalarConverterHelper.h"
#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>


void	ScalarIntConverter::_printInt(const std::string& literal)
{
	try
	{
		size_t pos;
		int	intValue = std::stoi(literal, &pos);
		if (pos == literal.length() || 
				(pos == literal.length() - 1 && literal.back() == 'f'))
			std::cout << "int: " << intValue << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << "int: impossible" << std::endl;
	}
	catch (const std::out_of_range& e)
	{
		std::cout << "int: impossible" << std::endl;
	}
}

void	ScalarIntConverter::printConvertedInt(const std::string& literal)
{
	if (ScalarConverterHelper::isPseudoLiteral(literal))
	{
		std::cout << "int: impossible" <<  std::endl;
	}
	else if (ScalarConverterHelper::isCharLiteral(literal))
	{
		int intValue = static_cast<int>(literal[0]);
		std::cout << "int: " << intValue << std::endl;
	}
	else
	{
		_printInt(literal);
	}
}
