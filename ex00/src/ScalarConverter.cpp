/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:36:01 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/07 18:51:10 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.h"
#include "../includes/ScalarConverterHelper.h"
#include <iostream>

void	ScalarConverter::convert(const std::string& literal)
{	
	std::cout << "char: "
		<< ScalarConverterHelper::charRepresentation(literal) << std::endl;
	std::cout << "int: "
		<< ScalarConverterHelper::intRepresentation(literal) << std::endl;
	std::cout << "float: "
		<< ScalarConverterHelper::floatRepresentation(literal) << std::endl;
	std::cout << "double: "
		<< ScalarConverterHelper::doubleRepresentation(literal) << std::endl;
}