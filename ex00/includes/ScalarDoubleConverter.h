/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarDoubleConverter.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:41:54 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/08 12:43:45 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARDOUBLECONVERTER_H
#define __SCALARDOUBLECONVERTER_H

#include <string>

class ScalarDoubleConverter
{
private:
	ScalarDoubleConverter() = default;
	ScalarDoubleConverter(const ScalarDoubleConverter& other) = default;
	ScalarDoubleConverter& operator=(const ScalarDoubleConverter& other) = default;
	~ScalarDoubleConverter() = default;
public:
	static void printConvertedDouble(const std::string& literal);
};

#endif