/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterHelper.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:49:12 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/09 13:19:34 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverterHelper.h"
#include <limits>
#include <iostream>

bool ScalarConverterHelper::isPseudoLiteralFloat(const std::string& literal)
{
	return (literal == "nanf" || literal == "+inff" || literal == "-inff");
}

bool ScalarConverterHelper::isPseudoLiteralDouble(const std::string& literal)
{
	return (literal == "nan" || literal == "+inf" || literal == "-inf");
}


bool	ScalarConverterHelper::isPseudoLiteral(const std::string& literal)
{
	return (isPseudoLiteralFloat(literal) || isPseudoLiteralDouble(literal));
}

bool	ScalarConverterHelper::isFloatLiteral(const std::string& literal)
{
	try
	{
		size_t	pos;
		float	floatValue = std::stof(literal, &pos);
		(void)floatValue;
		return (pos == literal.length() || 
				(pos == literal.length() - 1 && literal.back() == 'f'));
	}
	catch (const std::invalid_argument& e)
	{
		return false;
	}
	catch (const std::out_of_range& e)
	{
		return false;
	}
}

bool ScalarConverterHelper::isCharLiteral(const std::string& literal)
{
	return (literal.length() == 1 && literal[0] >= 0 &&
			isdigit(literal[0]) <= 127);
}
