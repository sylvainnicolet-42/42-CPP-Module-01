/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 08:57:04 by synicole          #+#    #+#             */
/*   Updated: 2023/06/28 08:57:05 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_H
# define HARL_CLASS_H

#include <iostream>

class Harl {
	public:
		Harl(void);
		~Harl(void);

		void	complain(std::string level) const;
	private:
		void	_debug(void) const;
		void	_info(void) const;
		void	_warning(void) const;
		void	_error(void) const;
};

enum level {
	DEBUG = 0,
	INFO = 1,
	WARNING = 2,
	ERROR = 3
};

#endif