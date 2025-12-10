/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:35:56 by nluchini          #+#    #+#             */
/*   Updated: 2025/12/10 18:16:03 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_H
#define __BASE_H

class Base
{
private:
public:
	virtual ~Base();
	static Base* generate();
	static void identify(Base* p);
	static void identify(Base& p);
};


#endif