/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:35:41 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/10 18:18:18 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_H
#define A_H

#include "Base.h"

class A : public Base
{
public:
	A() = default;
	A(const A& other) = default;
	A& operator=(const A& other) = default;
	~A() override = default;
};

#endif