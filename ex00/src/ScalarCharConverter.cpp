/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarCharConverter.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 10:48:40 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/08 11:32:18 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarCharConverter.h"
#include "../includes/ScalarConverterHelper.h"
#include <iostream>
#include <limits>
#include <string>

char ScalarCharConverter::_getCharFromLiteral(
	const std::string& literal)
{
	int	intValue = std::stoi(literal);
	return static_cast<char>(intValue);
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

    int sign = 1;
    std::size_t i = 0;

    if (literal[i] == '+' || literal[i] == '-') {
        if (literal[i] == '-')
            sign = -1;
        ++i;
    }

    if (i == literal.size())
        return false;

    long value = 0;
    for (; i < literal.size(); ++i) {
        if (!std::isdigit(static_cast<unsigned char>(literal[i])))
            return false;

        int digit = literal[i] - '0';
        value = value * 10 + digit;

        // early overflow guard in long (optional but safe)
        if (value > std::numeric_limits<int>::max())
            return false;
    }

    value *= sign;

    // Now check that it fits in char range
    if (value < std::numeric_limits<char>::min() ||
        value > std::numeric_limits<char>::max())
        return false;

    return true;
}

void ScalarCharConverter::_printChar(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
}

void ScalarCharConverter::printConvertedChar(
	const std::string& literal)
{
	if (_isChar(literal))
		_printChar(literal[0]);
	else if (_isCharInt(literal))
		_printChar(_getCharFromLiteral(literal));
	else
		std::cout << "char: impossible" <<  std::endl;
}
