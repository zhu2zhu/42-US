/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-0-maff_alpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 23:49:26 by yzhu              #+#    #+#             */
/*   Updated: 2017/01/30 23:50:50 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
   return (0);
}   
