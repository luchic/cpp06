/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterHelper.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:46:39 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/07 18:51:43 by nluchini         ###   ########.fr       */
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


	static std::string charRepresentation(const std::string& literal);
	static std::string intRepresentation(const std::string& literal);
	static std::string floatRepresentation(const std::string& literal);
	static std::string doubleRepresentation(const std::string& literal);
};


#endif