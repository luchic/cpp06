/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarCharConverter.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 10:47:13 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/08 11:05:58 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCHARCONVERTER_H
#define __SCALARCHARCONVERTER_H

#include <string>

class ScalarCharConverter
{
	private:
		ScalarCharConverter() = default;
		ScalarCharConverter(const ScalarCharConverter& other) = default;
		ScalarCharConverter& operator=(const ScalarCharConverter& other) = default;
		~ScalarCharConverter() = default;

		static bool _isChar(const std::string& literal);
		static bool _isCharInt(const std::string& literal);
		static void _printChar(char c);

		static char _getCharFromLiteral(const std::string& literal);

	public:
		static void	printConvertedChar(const std::string& literal);
};

#endif
