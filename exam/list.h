/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:57:42 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/05 13:23:54 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_POINT_FLOOD_FILL
# define T_POINT_FLOOD_FILL

typedef struct 	s_point {
    int 		x;				// x : Width  | x-axis
    int 		y;				// y : Height | y-axis
} 				t_point;

void  flood_fill(char **tab, t_point size, t_point begin);

#endif