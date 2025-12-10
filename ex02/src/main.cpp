/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:22:35 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/10 18:24:15 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Base.h"
#include "../includes/A.h"
#include "../includes/B.h"
#include "../includes/C.h"

int main()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Test " << i + 1 << ":" << std::endl;
		Base *basePtr = Base::generate();
		Base::identify(basePtr);
		Base::identify(*basePtr);
		delete basePtr;
	}
	return 0;
}