/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:34:28 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/10 18:18:26 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_H
#define C_H

#include "Base.h"

class C : public Base
{
public:
	C() = default;
	C(const C& other) = default;
	C& operator=(const C& other) = default;
	~C() override = default;
};



#endif