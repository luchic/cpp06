/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarIntConverter.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 11:33:48 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/08 12:43:22 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARINTCONVERTER_H
#define __SCALARINTCONVERTER_H

#include <string>

class ScalarIntConverter
{
private:
	ScalarIntConverter() = default;
	ScalarIntConverter(const ScalarIntConverter& other) = default;
	ScalarIntConverter& operator=(const ScalarIntConverter& other) = default;
	~ScalarIntConverter() = default;

public:
	static void printConvertedInt(const std::string& literal);
};


#endif