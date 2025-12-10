/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:55:14 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/10 12:25:53 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_H
#define __DATA_H

class Data
{
private:
	int _value;
public:
	Data() = default;
	Data(const Data& other) = default;
	Data& operator=(const Data& other) = default;
	~Data() = default;

	Data(int value);
	
	int getValue() const;
};


#endif