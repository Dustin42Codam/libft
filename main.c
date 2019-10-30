/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:02:13 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/10/29 12:38:17 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "header.h"

int		main(void)
{
	int 	a;
	int		opt = 1;
	int		results[1000];
	int		i = 0;

	system("@cls||clear");

	while (opt)
	{
		printf("\n\t\t+++++++++++++++++++++++++++++++\n");
		printf("\t\t+++Tests for libft functions+++\n");
		printf("\t\t+++++++++++++++++++++++++++++++\n\n\n");
		printf("\t Select Function:\n");
		printf("\t 0.	Cancel\n");
		printf("\t 1.	ft_tolower\n");
		printf("\t 2.	ft_toupper\n");
		printf("\t 3.	ft_isprint\n");
		printf("\t 4.	ft_isascii\n");
		printf("\t 5.	ft_isalpha\n");
		printf("\t Option: ");
		scanf("%d", &opt);

		switch (opt)
		{
			// 1. tolower vs ft_tolower
			case 1:	for (a = -300; a <= 500; a++)
					{
						printf("Input Value:%d\t", a);
						printf("tolower: %c\t", tolower(a));
						printf("ft_tolower: %c\n", ft_tolower(a));
						if (tolower(a) - ft_tolower(a))
							results[i++] = a;
					} break;

					// 2. toupper vs ft_toupper
			case 2: 
					for (a = -300; a <= 500; a++)
					{
						printf("Input Value:%d\t", a);
						printf("toupper: %c\t", toupper(a));
						printf("ft_toupper: %c\n", ft_toupper(a));
					} break;

					// 3. isprint vs. ft_isprint
			case 3: for (a = -300; a <= 500; a++)
					{
						printf("Input Value:%d\t", a);
						printf("isprint: %d\t", isprint(a));
						printf("ft_isprint: %d\n", ft_isprint(a));
						if (isprint(a) - ft_isprint(a))
							results[i++] = a;
					} break;

					// 4. isascii vs. ft_isascii
			case 4: for (a = -300; a <= 500; a++)
					{
						printf("Input Value:%d\t", a);
						printf("isascii: %d\t", isascii(a));
						printf("ft_isascii: %d\n", ft_isascii(a));
					} break;
			/*
					// 5. isalpha vs. ft_isaplha
			case 5: for (a = -300; a <= 500; a++)
					{
						printf("Input Value:%d\t", a);
						printf("isalpha: %d\t", isalpha(a));
						printf("ft_islpha: %d\n", ft_isalpha(a));
					} break;
			*/
			case 0: break;


			default: break;
		}
		
		/*
		//print results
		i = 0;
		if (results[i++])
		{
			while (results[i++])
			printf("\n\nResults:");
			printf("\n%d\n", results[i]);
		}
		*/
	}

	/*
	// 1. tolower vs ft_tolower
	for (a = -300; a <= 500; a++)
	{
	printf("Input Value:%d\t", a);
	printf("tolower: %d\t", tolower(a));
	printf("ft_tolower: %d\n", ft_tolower(a));
	}

	// 2. toupper vs ft_toupper
	for (a = -300; a <= 500; a++)
	{
	printf("Input Value:%d\t", a);
	printf("toupper: %d\t", toupper(a));
	printf("ft_toupper: %d\n", ft_toupper(a));
	}

	// 3. isprint vs. ft_isprint
	for (a = -300; a <= 500; a++)
	{
	printf("Input Value:%d\t", a);
	printf("isprint: %d\t", isprint(a));
	printf("ft_isprint: %d\n", ft_isprint(a));
	}

	// 4. isascii vs. ft_isascii
	for (a = -300; a <= 500; a++)
	{
	printf("Input Value:%d\t", a);
	printf("isascii: %d\t", isascii(a));
	printf("ft_isascii: %d\n", ft_isascii(a));
	}

	// 5. isalpha vs. ft_isaplha
	for (a = -300; a <= 500; a++)
	{
	printf("Input Value:%d\t", a);
	printf("isalpha: %d\t", isalpha(a));
	printf("ft_islpha: %d\n", ft_isalpha(a));
	}
	*/

	return (0);
}
