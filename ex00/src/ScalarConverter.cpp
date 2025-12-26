/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:36:01 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/26 15:21:01 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.h"
#include "../includes/ScalarCharConverter.h"
#include "../includes/ScalarIntConverter.h"
#include "../includes/ScalarFloatConverter.h"
#include "../includes/ScalarDoubleConverter.h"
#include <iostream>

void	ScalarConverter::convert(const std::string& literal)
{
	ScalarCharConverter::printConvertedChar(literal);
	ScalarIntConverter::printConvertedInt(literal);
	ScalarFloatConverter::printConvertedFloat(literal);
	ScalarDoubleConverter::printConvertedDouble(literal);
}
