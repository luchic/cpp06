/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:22:35 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/10 11:32:43 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/ScalarConverter.h"

void test()
{
    const std::string inputs[] = {
        // subject examples
        "0",
        "nan",
        "nanf",
        "42.0f",

        // chars
        "a",
        "Z",
        "0",
        "9",
		"42.100000f",

        // ints
        "-42",
        "42",
        "127",
        "128",
        "2147483647",
        "-2147483648",
        "2147483648",

        // floats / doubles
        "0.0",
        "-4.2",
        "4.2",
        "0.0f",
        "-4.2f",
        "4.2f",
		"4.20000f",
		"4.34134f",
		"4.30004f",
		"4.00000012f",
        "1.000000f",
        "1.000001f",
		"10000",

        // pseudo literals
        "+inf",
        "-inf",
        "+inff",
        "-inff",

        // invalids
        "hello",
        "42ff",
        "--1",
        "1.2.3",
		"42.101adfasdf"
		
    };

    const std::size_t count = sizeof(inputs) / sizeof(inputs[0]);

    for (std::size_t i = 0; i < count; ++i)
    {
		std::cout << "===== Test " << i + 1
				  << " | input: \"" << inputs[i] << "\" =====" << std::endl;
		try
		{
			ScalarConverter::convert(inputs[i]);
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
    }
}

int main(int argc, char** argv)
{
	(void)argc;
	(void)argv;
	
	test();
	// ScalarConverter::convert("2147483648");
	// if (argc != 2)
	// {
	// 	std::cerr << "Usage: ./scalar_converter <literal_value>" << std::endl;
	// 	return 1;
	// }
	// std::string literal = std::string(argv[1]);
	// ScalarConverter::convert(literal);
	return 0;
}