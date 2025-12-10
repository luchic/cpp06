/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:35:12 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/10 18:18:24 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_H
#define B_H

#include "Base.h"

class B : public Base
{
public:
	B() = default;
	B(const B& other) = default;
	B& operator=(const B& other) = default;
	~B() override = default;
};

#endif