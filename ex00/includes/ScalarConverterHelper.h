/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterHelper.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:46:39 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/09 13:16:24 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTERHELPER_H
#define __SCALARCONVERTERHELPER_H

#include <string>

class ScalarConverterHelper
{
private:
	ScalarConverterHelper() = default;
	ScalarConverterHelper(const ScalarConverterHelper& other) = default;
	ScalarConverterHelper& operator=(
		const ScalarConverterHelper& other) = default;
	~ScalarConverterHelper() = default;

public:
	static bool isPseudoLiteral(const std::string& literal);
	static bool isFloatLiteral(const std::string& literal);
	static bool isCharLiteral(const std::string& literal);
	static bool isPseudoLiteralDouble(const std::string& literal);
	static bool isPseudoLiteralFloat(const std::string& literal);
};

#endif