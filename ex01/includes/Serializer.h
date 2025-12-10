/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:53:30 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/10 12:27:00 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER_H
#define __SERIALIZER_H

#include "Data.h"
#include <cstdint>

class Serializer
{
private:
	Serializer() = default;
	Serializer(const Serializer& other) = default;
	Serializer& operator=(const Serializer& other) = default;
	~Serializer() = default;
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};



#endif