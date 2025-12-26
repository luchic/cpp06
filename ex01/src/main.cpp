/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:22:35 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/26 17:11:48 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Serializer.h"
#include "../includes/Data.h"

int main()
{
	Data data(42);
	
	std::cout << "Original Data value: " << data.getValue() << std::endl;
	uintptr_t ptr = Serializer::serialize(&data);
	Data* deserializedData = Serializer::deserialize(ptr);
	std::cout << "Deserialized Data value: " << deserializedData->getValue() << std::endl;
	return 0;
}