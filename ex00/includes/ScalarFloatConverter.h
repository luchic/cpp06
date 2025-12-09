/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarFloatConverter.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:19:39 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/09 13:15:59 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARFLOATCONVERTER_H
#define __SCALARFLOATCONVERTER_H

#include <string>

class ScalarFloatConverter
{
private:
	ScalarFloatConverter();
	ScalarFloatConverter(const ScalarFloatConverter& other);
	ScalarFloatConverter& operator=(const ScalarFloatConverter& other);
	~ScalarFloatConverter();

	static void _printPseudoLiteral(const std::string& literal);
	static void _printCharLiteral(char c);

public:
	static void printConvertedFloat(const std::string& literal);
};


#endif