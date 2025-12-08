/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarIntConverter.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 11:37:20 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/08 11:41:02 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarIntConverter.h"
#include "../includes/ScalarConverterHelper.h"
#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>


void	ScalarIntConverter::printConvertedInt(const std::string& literal)
{
	if (ScalarConverterHelper::isPseudoLiteral(literal))
	{
		std::cout << "int: impossible" <<  std::endl;
		return ;
	}
	try
	{
		int	intValue = std::stoi(literal);
		std::cout << "int: " << intValue << std::endl;
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
