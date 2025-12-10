/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarDoubleConverter.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:45:48 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/09 16:03:07 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarDoubleConverter.h"
#include "../includes/ScalarConverterHelper.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <stdexcept>

void ScalarDoubleConverter::_printPseudoLiteral(const std::string& literal)
{
	if (ScalarConverterHelper::isPseudoLiteral(literal))
	{
		std::cout << "double: ";
		if (ScalarConverterHelper::isPseudoLiteralDouble(literal))
			std::cout << literal << std::endl;
		else
		{
			std::string trimmedLiteral = literal.substr(0, literal.length() - 1);
			std::cout << trimmedLiteral << std::endl;
		}
	}
}

void ScalarDoubleConverter::_printCharLiteral(char c)
{
	float floatValue = static_cast<float>(c);
	std::cout << "double: " << _formatDoubleValue(floatValue) << std::endl;
}

std::string ScalarDoubleConverter::_formatDoubleValue(double value)
{
    std::ostringstream oss;

    oss << std::fixed << std::setprecision(6) << value;
    std::string res = oss.str();

    std::size_t dotPos = res.find('.');
    if (dotPos != std::string::npos) {
        std::size_t lastNonZero = res.find_last_not_of('0');
        if (lastNonZero != std::string::npos && lastNonZero > dotPos) {
            res.erase(lastNonZero + 1);
        } else if (lastNonZero != std::string::npos) {
            res.erase(dotPos + 2);
        }
    }
    return res;
}

void ScalarDoubleConverter::printConvertedDouble(const std::string& literal)
{
	if (ScalarConverterHelper::isPseudoLiteral(literal))
	{
		_printPseudoLiteral(literal);
		return;
	}
	
	if (ScalarConverterHelper::isCharLiteral(literal))
	{
		_printCharLiteral(literal[0]);
		return;
	}

	 if (!ScalarConverterHelper::isFloatLiteral(literal))
	{
		std::cout << "float: impossible" << std::endl;
		return;
	}

	try 
	{
		double doubleValue = std::stod(literal);
		std::cout << "double: " << _formatDoubleValue(doubleValue) << std::endl;

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
