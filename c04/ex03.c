// not finished solution
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:47:14 by akuat             #+#    #+#             */
/*   Updated: 2023/08/27 14:13:56 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putchar(char c, int neg_check)
// {
// 	if (neg_check != 0)
// 		write(1, "-", 1);
// 	write(1, &c, 1);
// }

int    find_first(char *str){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9')
            break;
        i++;
    }
    return(i);
}

int    find_last(char *str, int i){
    while(str[i] != '\0'){
	    if( !(str[i] >= '0' && str[i] <= '9') ){
	        break;
	    }
	    i++;
	}
	return(i);
}

int neg_check(char *str, int j){
    int i;
    int counter;
    
    i = 0;
    counter = 0;
    while(i != j){
        if(str[i] == '-'){
          counter++;  
        }
        i++;
    }
    return(counter);
}

int	ft_atoi(char *str)
{
	int	first_i;
	int	last_i;
	char    *str_ref;
	int neg;
	
	str_ref = str;
	first_i = find_first(str);
	last_i = find_last(str, first_i);
	neg = neg_check(str, first_i);
	
	if(neg%2 != 0)
	    write(1, "-", 1);
	while(first_i != last_i){
	    char ans = str[first_i] + '0';
	    write(1, &str[first_i], 1);
	    first_i++;
	}
	return (0);
}

int	main(void)
{
	char	*str;

	str = "---+1c2c4a";
	ft_atoi(str);
	return (0);
}
