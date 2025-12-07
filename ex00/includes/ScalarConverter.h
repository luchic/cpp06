/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:28:11 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/07 18:51:29 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_H
#define __SCALARCONVERTER_H

#include <string>

class ScalarConverter
{
	private:
		ScalarConverter() = default;
		ScalarConverter(const ScalarConverter& other) = default;
		ScalarConverter& operator=(const ScalarConverter& other) = default;
		~ScalarConverter() = default;

	public:
		static void	convert(const std::string& literal);
};


#endif