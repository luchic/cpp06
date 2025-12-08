/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterHelper.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:46:39 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/08 12:41:06 by nluchini         ###   ########.fr       */
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
};


#endif