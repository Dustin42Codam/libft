#include <stdio.h>
#include <string.h>
#include <criterion/criterion.h>
#include "libft.h"

Test(ft_tokenize, empty_input) {
	char	str[]	= "";
	char	*delim	= "";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, delimeter_zero) {
	char	*str	= "";
	char	*delim	= 0;
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);
	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, delimeter_empty_00) {
	char	str[]	= "ABC DEF";
	char	*delim	= "";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, delimeter_empty_01) {
	char	str[]	= "A";
	char	*delim	= "";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, one_delimeter_00) {
	char	str[]	= "ABC";
	char	*delim	= " ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, one_delimeter_01) {
	char	str[]	= "ABC ";
	char	*delim	= " ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, one_delimeter_02) {
	char	str[]	= " ABC ";
	char	*delim	= " ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, one_delimeter_03) {
	char	str[]	= " ABC";
	char	*delim	= " ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, one_delimeter_04) {
	char	str[]	= " A BC";
	char	*delim	= "  ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, one_delimeter_05) {
	char	str[]	= " A B C";
	char	*delim	= "  ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, one_delimeter_06) {
	char	str[]	= " A B C ";
	char	*delim	= "  ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, two_delimeter_00) {
	char	str[]	= " A B C ";
	char	*delim	= "  ;";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, two_delimeter_01) {
	char	str[]	= " A ;B C ";
	char	*delim	= "  ;";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, two_delimeter_02) {
	char	str[]	= " A ;B ;C ";
	char	*delim	= "  ;";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, two_delimeter_03) {
	char	str[]	= "; A ;B ;C ;";
	char	*delim	= "; ;  ;";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, two_delimeter_04) {
	char	str[]	= ";;;;;;";
	char	*delim	= "; ;  ;";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, two_delimeter_05) {
	char	str[]	= "; ; ; ; ; ;";
	char	*delim	= "; ;  ;";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, two_delimeter_06) {
	char	str[]	= "s;2 15;456 45;7 567;4568 48;78 46578;";
	char	*delim	= ";;  ; ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, two_delimeter_07) {
	char	str[]	= "s;2 15;456 45;7 567;4568 48;78 46578;";
	char	*delim	= "5 ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, three_delimeter_00) {
	char	str[]	= "echo lol | grep lol &> lol.txt";
	char	*delim	= ";|>";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, three_delimeter_01) {
	char	str[]	= ">echo lol | grep lol &> lol.txt | 1 | 2|||5|";
	char	*delim	= ";|>";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, three_delimeter_02) {
	char	str[]	= " >  e c h o l o  l | g r e p l o l  & > l o l . t x t  | 1 | 2 | | | 5 | ";
	char	*delim	= " | > ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, three_delimeter_03) {
	char	str[]	= " >  e c h o l o  l | g \\ r e p l o l  & > l o l . t x t  | 1 | 2 | | | 5 | ";
	char	*delim	= " \\ o ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, three_delimeter_04) {
	char	str[]	= " >  -e \\      \\ c h-- - -> l -----\\ ----  --- ----- 5 | ";
	char	*delim	= " \\ - ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, large_input_string_00) {
	char	str[]	= "qh9XnK|4tVsTKiAEWq 18s5YUu|IrldNCsg5xNa|v47n qh9XnK4tV|sTKiAEWq18s5YUuIrqh9Xn|K4tVsTKiAEW|q18s5YUuIrldNCsg5xNav47nqh9XnK4t VsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIr";
	char	*delim	= "7MQ13yZ|IITxq2QNo38gg ";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, large_input_string_01) {
	char	str[]	= "+qh9XnK|4tVsTKiAEWq 18s5YUu|IrldNCsg5xNa|v47n qh9XnK4tV|sTKiAEWq18s5YUuIrqh9Xn|K4tVsTKiAEW|q18s5YUuIrldNCsg5xNav47nqh9XnK4t VsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIr";
	char	*delim	= "+";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, large_input_string_02) {
	char	str[]	= "qh9XnK|4tVsTKiAEWq 18s5YUu|IrldNCsg5xNa|v47n qh9XnK4tV|sTKiAEWq18s5YUuIrqh9Xn|K4tVsTKiAEW|q18s5YUuIrldNCsg5xNav47nqh9XnK4t VsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIr+";
	char	*delim	= "+";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

Test(ft_tokenize, large_input_string_03) {
	char	str[]	= "qh9XnK|4tVsTKiAEWq 18s5YUu|IrldNCsg5xNa|v47n qh9XnK4tV|sTKiAEWq18s5YUuIrqh9Xn|K4tVsTKiAEW|q18s5YUuIrldNCsg5xNav47nqh9XnK4t VsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrl+dNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIrqh9XnK4tVsTKiAEWq18s5YUuIrldNCsg5xNav47nqh9XnK4tVsTKiAEWq18s5YUuIr";
	char	*delim	= "+";
	char	*libc_token;
	size_t	i = 0;

	char	**my_token = ft_tokenize(str, delim);

	libc_token = strtok(str, delim);
	while (libc_token)
	{
    	cr_expect(strlen(libc_token) == strlen(my_token[i]), "Expected the same strlen.");
    	cr_expect(strncmp(libc_token, my_token[i], strlen(libc_token)) == 0, "Expected same content.");
		libc_token = strtok(NULL, delim);
		i++;
	}
}

