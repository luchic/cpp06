/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarFloatConverter.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:24:48 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/09 16:04:07 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarFloatConverter.h"
#include "../includes/ScalarConverterHelper.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>
#include <limits>

// TODO: Add Check of float.
/*
	if (floatValue - static_cast<int>(floatValue) == 0)
		std::cout << ".0";
	this code dosen't work corect. If 1.000001 cout doesn't print 000001
	but at the samee time 1.000001 - 1 != 0 that why printed only 1f
*/

void ScalarFloatConverter::_printPseudoLiteral(const std::string& literal)
{
	if (ScalarConverterHelper::isPseudoLiteral(literal))
	{
		std::cout << "float: ";
		if (ScalarConverterHelper::isPseudoLiteralFloat(literal))
			std::cout << literal << std::endl;
		else
			std::cout << literal << "f" << std::endl;
	}
}

void ScalarFloatConverter::_printCharLiteral(char c)
{
	float floatValue = static_cast<float>(c);
	std::cout << "float: " << _formatFloatValue(floatValue) << "f" << std::endl;
}

std::string ScalarFloatConverter::_formatFloatValue(float value)
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

void ScalarFloatConverter::printConvertedFloat(const std::string& literal)
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
        float floatValue = std::stof(literal);
        std::cout << "float: "
			<< _formatFloatValue(floatValue) << "f" << std::endl;
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << "float: impossible" << std::endl;
	}
	catch (const std::out_of_range& e)
	{
		std::cout << "float: impossible" << std::endl;
	}
}
