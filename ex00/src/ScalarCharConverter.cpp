/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarCharConverter.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 10:48:40 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/09 15:18:49 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarCharConverter.h"
#include "../includes/ScalarConverterHelper.h"
#include <iostream>
#include <limits>
#include <string>

int ScalarCharConverter::_getCharFromLiteral(
	const std::string& literal)
{
	try
	{
		int	intValue = std::stoi(literal);
		return static_cast<char>(intValue);
	}
	catch(const std::exception& e)
	{
		return -1;
	}
}

bool ScalarCharConverter::_isChar(const std::string& literal)
{
	return (literal.length() == 1 && std::isprint(literal[0]) &&
			!std::isdigit(literal[0]));
}

// TODO: First verstion rebuild
bool ScalarCharConverter::_isCharInt(const std::string& literal)
{
    if (literal.empty())
        return false;

    std::size_t i = 0;
	if (ScalarConverterHelper::isFloatLiteral(literal))
		return true;

    if (literal[i] == '+' || literal[i] == '-')
        ++i;

    if (i == literal.size())
        return false;

    long value = 0;
    for (; i < literal.size(); ++i) {
        if (!std::isdigit(static_cast<unsigned char>(literal[i])))
            return false;

        int digit = literal[i] - '0';
        value = value * 10 + digit;

        if (value > std::numeric_limits<int>::max())
            return false;
    }
    return true;
}

void ScalarCharConverter::_printChar(int c)
{
	if (c == -1)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
}

void ScalarCharConverter::printConvertedChar(
	const std::string& literal)
{
	if (ScalarConverterHelper::isPseudoLiteral(literal))
		std::cout << "char: impossible" <<  std::endl;
	else if (_isChar(literal))
		_printChar(literal[0]);
	else if (_isCharInt(literal))
		_printChar(_getCharFromLiteral(literal));
	else
		std::cout << "char: impossible" <<  std::endl;
}
