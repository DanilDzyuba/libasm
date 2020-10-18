/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clauren <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:48:27 by clauren           #+#    #+#             */
/*   Updated: 2020/10/17 17:38:05 by clauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"


int main()
{
	char *a;
	printf("============================LIBASM TEST============================\n\n");
	printf("============================FT_STRLEN()============================\n");
	printf("\"\"\t\t\t\t\t C: %lu\t\t A: %zu\n", strlen(""), ft_strlen(""));
	printf("\" \"\t\t\t\t\t C: %lu\t\t A: %zu\n", strlen(" "), ft_strlen(" "));
	printf("\"12345\"\t\t\t\t C: %lu\t\t A: %zu\n", strlen("12345"), ft_strlen("12345"));
	printf("Long Lorem ipsum\t C: %lu\t A: %zu\n", strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec non lacus non mi sollicitudin fringilla malesuada quis tellus. In pharetra, neque vitae congue rutrum, enim mauris consequat libero, eget consequat enim nulla in orci. Aenean dapibus sollicitudin turpis eu porta. Praesent tristique ipsum a velit vehicula, vel feugiat lectus placerat. Sed purus dolor, tincidunt at laoreet id, bibendum non velit. Suspendisse ut mauris quis ipsum efficitur accumsan et eget lacus. Phasellus fermentum molestie mi eu hendrerit. Suspendisse nisi augue, malesuada quis dictum varius, dictum sit amet elit. Sed rutrum ex in aliquet sodales. Suspendisse vel nulla est. Nulla sem elit, luctus a urna at, ullamcorper dapibus ligula.\n"
											"\n"
											"Mauris tellus nunc, imperdiet sit amet dignissim sed, fermentum non sapien. Suspendisse vulputate, ante id hendrerit hendrerit, urna nisl rutrum diam, condimentum semper est orci nec ex. Sed elit massa, molestie ac faucibus eget, ultricies a mi. Aenean sit amet feugiat tortor. Pellentesque.\n"
											""), ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec non lacus non mi sollicitudin fringilla malesuada quis tellus. In pharetra, neque vitae congue rutrum, enim mauris consequat libero, eget consequat enim nulla in orci. Aenean dapibus sollicitudin turpis eu porta. Praesent tristique ipsum a velit vehicula, vel feugiat lectus placerat. Sed purus dolor, tincidunt at laoreet id, bibendum non velit. Suspendisse ut mauris quis ipsum efficitur accumsan et eget lacus. Phasellus fermentum molestie mi eu hendrerit. Suspendisse nisi augue, malesuada quis dictum varius, dictum sit amet elit. Sed rutrum ex in aliquet sodales. Suspendisse vel nulla est. Nulla sem elit, luctus a urna at, ullamcorper dapibus ligula.\n"
														   "\n"
														   "Mauris tellus nunc, imperdiet sit amet dignissim sed, fermentum non sapien. Suspendisse vulputate, ante id hendrerit hendrerit, urna nisl rutrum diam, condimentum semper est orci nec ex. Sed elit massa, molestie ac faucibus eget, ultricies a mi. Aenean sit amet feugiat tortor. Pellentesque.\n"
														   ""));
	printf("============================FT_STRCPY()============================\n");
	char cpy1[1500];
	printf("\"\"\t\t\t\t\t C: %s\t\t A: %s\n", strcpy(cpy1, ""), ft_strcpy(cpy1, ""));
	printf("\" \"\t\t\t\t\t C: %s\t\t A: %s\n", strcpy(cpy1, " "), ft_strcpy(cpy1, " "));
	printf("\"12345\"\t\t\t\t C: %s\t\t A: %s\n", strcpy(cpy1, "12345"), ft_strcpy(cpy1, "12345"));
	printf("Long Lorem ipsum\t C: %s\n\t\t\t\t\t A: %s\n", strcpy(cpy1, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec non lacus non mi sollicitudin fringilla malesuada quis tellus. In pharetra, neque vitae congue rutrum, enim mauris consequat libero, eget consequat enim nulla in orci. Aenean dapibus sollicitudin turpis eu porta. Praesent tristique ipsum a velit vehicula, vel feugiat lectus placerat. Sed purus dolor, tincidunt at laoreet id, bibendum non velit. Suspendisse ut mauris quis ipsum efficitur accumsan et eget lacus. Phasellus fermentum molestie mi eu hendrerit. Suspendisse nisi augue, malesuada quis dictum varius, dictum sit amet elit. Sed rutrum ex in aliquet sodales. Suspendisse vel nulla est. Nulla sem elit, luctus a urna at, ullamcorper dapibus ligula.\n"
														"\n"
														"Mauris tellus nunc, imperdiet sit amet dignissim sed, fermentum non sapien. Suspendisse vulputate, ante id hendrerit hendrerit, urna nisl rutrum diam, condimentum semper est orci nec ex. Sed elit massa, molestie ac faucibus eget, ultricies a mi. Aenean sit amet feugiat tortor. Pellentesque.\n"
														""), ft_strcpy(cpy1, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec non lacus non mi sollicitudin fringilla malesuada quis tellus. In pharetra, neque vitae congue rutrum, enim mauris consequat libero, eget consequat enim nulla in orci. Aenean dapibus sollicitudin turpis eu porta. Praesent tristique ipsum a velit vehicula, vel feugiat lectus placerat. Sed purus dolor, tincidunt at laoreet id, bibendum non velit. Suspendisse ut mauris quis ipsum efficitur accumsan et eget lacus. Phasellus fermentum molestie mi eu hendrerit. Suspendisse nisi augue, malesuada quis dictum varius, dictum sit amet elit. Sed rutrum ex in aliquet sodales. Suspendisse vel nulla est. Nulla sem elit, luctus a urna at, ullamcorper dapibus ligula.\n"
																	   "\n"
																	   "Mauris tellus nunc, imperdiet sit amet dignissim sed, fermentum non sapien. Suspendisse vulputate, ante id hendrerit hendrerit, urna nisl rutrum diam, condimentum semper est orci nec ex. Sed elit massa, molestie ac faucibus eget, ultricies a mi. Aenean sit amet feugiat tortor. Pellentesque.\n"
																	   ""));
	printf("============================FT_STRCMP()============================\n");
	printf("\"\" & \"\"\t\t\t\t C: %d\t\t A: %d\n", strcmp("", ""), ft_strcmp("", ""));
	printf("\"1\" & \" \"\t\t\t C: %d\t\t A: %d\n", strcmp("1", " "), ft_strcmp("1", " "));
	printf("\" \" & \"-1\"\t\t\t C: %d\t\t A: %d\n", strcmp(" ", "-1"), ft_strcmp(" ", "-1"));
	printf("\"-1\" & \"-1\"\t\t\t C: %d\t\t A: %d\n", strcmp("-1", "-1"), ft_strcmp("-1", "-1"));
	printf("\"12345\" & \"123456\"\t C: %d\t\t A: %d\n", strcmp("12345", "123456"), ft_strcmp("12345", "123456"));
	printf("\" \" & \"\"\t\t\t C: %d\t\t A: %d\n", strcmp(" ", ""), ft_strcmp(" ", ""));
	printf("\"\" & \"   \"\t\t\t C: %d\t\t A: %d\n", strcmp("", "   "), ft_strcmp("", "   "));
	printf("Long Lorem ipsum\t C: %d\n\t\t\t\t\t A: %d\n", strcmp("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec non lacus non mi sollicitudin fringilla malesuada quis tellus. In pharetra, neque vitae congue rutrum, enim mauris consequat libero, eget consequat enim nulla in orci. Aenean dapibus sollicitudin turpis eu porta. Praesent tristique ipsum a velit vehicula, vel feugiat lectus placerat. Sed purus dolor, tincidunt at laoreet id, bibendum non velit. Suspendisse ut mauris quis ipsum efficitur accumsan et eget lacus. Phasellus fermentum molestie mi eu hendrerit. Suspendisse nisi augue, malesuada quis dictum varius, dictum sit amet elit. Sed rutrum ex in aliquet sodales. Suspendisse vel nulla est. Nulla sem elit, luctus a urna at, ullamcorper dapibus ligula.\n"
																  "\n"
																  "Mauris tellus nunc, imperdiet sit amet dignissim sed, fermentum non sapien. Suspendisse vulputate, ante id hendrerit hendrerit, urna nisl rutrum diam, condimentum semper est orci nec ex. Sed elit massa, molestie ac faucibus eget, ultricies a mi. Aenean sit amet feugiat tortor. Pellentesque.\n"
																  "", "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec non lacus non mi sollicitudin fringilla malesuada quis tellus. In pharetra, neque vitae congue rutrum, enim mauris consequat libero, eget consequat enim nulla in orci. Aenean dapibus sollicitudin turpis eu porta. Praesent tristique ipsum a velit vehicula, vel feugiat lectus placerat. Sed purus dolor, tincidunt at laoreet id, bibendum non velit. Suspendisse ut mauris quis ipsum efficitur accumsan et eget lacus. Phasellus fermentum molestie mi eu hendrerit. Suspendisse nisi augue, malesuada quis dictum varius, dictum sit amet elit. Sed rutrum ex in aliquet sodales. Suspendisse vel nulla est. Nulla sem elit, luctus a urna at, ullamcorper dapibus ligula.\n"
																		"\n"
																		"Mauris tellus nunc, imperdiet sit amet dignissim sed, fermentum non sapien. Suspendisse vulputate, ante id hendrerit hendrerit, urna nisl rutrum diam, condimentum semper est orci nec ex. Sed elit massa, molestie ac faucibus eget, ultricies a mi. Aenean sit amet feugiat tortor. Pellentesque.\n"
																		""), ft_strcmp("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec non lacus non mi sollicitudin fringilla malesuada quis tellus. In pharetra, neque vitae congue rutrum, enim mauris consequat libero, eget consequat enim nulla in orci. Aenean dapibus sollicitudin turpis eu porta. Praesent tristique ipsum a velit vehicula, vel feugiat lectus placerat. Sed purus dolor, tincidunt at laoreet id, bibendum non velit. Suspendisse ut mauris quis ipsum efficitur accumsan et eget lacus. Phasellus fermentum molestie mi eu hendrerit. Suspendisse nisi augue, malesuada quis dictum varius, dictum sit amet elit. Sed rutrum ex in aliquet sodales. Suspendisse vel nulla est. Nulla sem elit, luctus a urna at, ullamcorper dapibus ligula.\n"
																					   "\n"
																					   "Mauris tellus nunc, imperdiet sit amet dignissim sed, fermentum non sapien. Suspendisse vulputate, ante id hendrerit hendrerit, urna nisl rutrum diam, condimentum semper est orci nec ex. Sed elit massa, molestie ac faucibus eget, ultricies a mi. Aenean sit amet feugiat tortor. Pellentesque.\n"
																					   "", "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec non lacus non mi sollicitudin fringilla malesuada quis tellus. In pharetra, neque vitae congue rutrum, enim mauris consequat libero, eget consequat enim nulla in orci. Aenean dapibus sollicitudin turpis eu porta. Praesent tristique ipsum a velit vehicula, vel feugiat lectus placerat. Sed purus dolor, tincidunt at laoreet id, bibendum non velit. Suspendisse ut mauris quis ipsum efficitur accumsan et eget lacus. Phasellus fermentum molestie mi eu hendrerit. Suspendisse nisi augue, malesuada quis dictum varius, dictum sit amet elit. Sed rutrum ex in aliquet sodales. Suspendisse vel nulla est. Nulla sem elit, luctus a urna at, ullamcorper dapibus ligula.\n"
																							 "\n"
																							 "Mauris tellus nunc, imperdiet sit amet dignissim sed, fermentum non sapien. Suspendisse vulputate, ante id hendrerit hendrerit, urna nisl rutrum diam, condimentum semper est orci nec ex. Sed elit massa, molestie ac faucibus eget, ultricies a mi. Aenean sit amet feugiat tortor. Pellentesque.\n"
																							 ""));
	printf("============================FT_STRDUP()============================\n");
	printf("\"\"\t\t\t\t\t C: %s\t\t A: %s\n", strdup(""), ft_strdup(""));
	printf("\" \"\t\t\t\t\t C: %s\t\t A: %s\n", strdup(" "), ft_strdup(" "));
	printf("\"12345\"\t\t\t\t C: %s\t A: %s\n", strdup("12345"), ft_strdup("12345"));
	printf("\"Long Lorem ipsum\"\t C: %s\t\n\t\t\t\t\t A: %s\n", strdup("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec non lacus non mi sollicitudin fringilla malesuada quis tellus. In pharetra, neque vitae congue rutrum, enim mauris consequat libero, eget consequat enim nulla in orci. Aenean dapibus sollicitudin turpis eu porta. Praesent tristique ipsum a velit vehicula, vel feugiat lectus placerat. Sed purus dolor, tincidunt at laoreet id, bibendum non velit. Suspendisse ut mauris quis ipsum efficitur accumsan et eget lacus. Phasellus fermentum molestie mi eu hendrerit. Suspendisse nisi augue, malesuada quis dictum varius, dictum sit amet elit. Sed rutrum ex in aliquet sodales. Suspendisse vel nulla est. Nulla sem elit, luctus a urna at, ullamcorper dapibus ligula.\n"
															 "\n"
															 "Mauris tellus nunc, imperdiet sit amet dignissim sed, fermentum non sapien. Suspendisse vulputate, ante id hendrerit hendrerit, urna nisl rutrum diam, condimentum semper est orci nec ex. Sed elit massa, molestie ac faucibus eget, ultricies a mi. Aenean sit amet feugiat tortor. Pellentesque.\n"
															 ""), ft_strdup("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec non lacus non mi sollicitudin fringilla malesuada quis tellus. In pharetra, neque vitae congue rutrum, enim mauris consequat libero, eget consequat enim nulla in orci. Aenean dapibus sollicitudin turpis eu porta. Praesent tristique ipsum a velit vehicula, vel feugiat lectus placerat. Sed purus dolor, tincidunt at laoreet id, bibendum non velit. Suspendisse ut mauris quis ipsum efficitur accumsan et eget lacus. Phasellus fermentum molestie mi eu hendrerit. Suspendisse nisi augue, malesuada quis dictum varius, dictum sit amet elit. Sed rutrum ex in aliquet sodales. Suspendisse vel nulla est. Nulla sem elit, luctus a urna at, ullamcorper dapibus ligula.\n"
																			"\n"
																			"Mauris tellus nunc, imperdiet sit amet dignissim sed, fermentum non sapien. Suspendisse vulputate, ante id hendrerit hendrerit, urna nisl rutrum diam, condimentum semper est orci nec ex. Sed elit massa, molestie ac faucibus eget, ultricies a mi. Aenean sit amet feugiat tortor. Pellentesque.\n"
																			""));
	printf("=====================FT_READ() && FT_WRITE()=========================\n");
	char buff1[101];
	char buff2[101];
	char buff3[101];
	char buff4[101];
	char buff5[1];
	// 100 BYTE STRING : Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque porttitor mollis mi a aliquam
	int fd1 = open("Makefile", O_RDONLY);
	int fd2 = open("Makefile", O_RDONLY);
	printf("MakeFile\t C: %zd\t\t A: %zu\n", read(fd1, &buff1, 100), ft_read(fd2, &buff2, 100));
	write(0, "C: |>", 6);write(0, &buff1, 50); write(0, "<|", 2);
	write(0, "\nA: |>", 6);ft_write(0, (buff1 + 50), 50); write(0, "<|", 2);
	write(0, "\nNEXT BUFF\n", 11);
	write(0, "C: |>", 6);write(0, &buff2, 50); write(0, "<|", 2);
	write(0, "\nA: |>", 6);ft_write(0, (buff2 + 50), 50); write(0, "<|\n", 3);

	errno = 0;
	printf("ERRNO\t C: %zd\t errno = %s\n", read(100, &buff5, 1), strerror(errno));
	errno = 0;
	printf("ERRNO\t A: %zd\t errno = %s\n", ft_read(100, &buff5, 1), strerror(errno));

	printf("STDIN\t\t C: %zd\t\t A: %zu\n", read(1, &buff3, 100), ft_read(1, &buff4, 100));
	write(2, "C: |>", 6);write(2, &buff3, 50); write(2, "<|", 2);
	write(2, "\nA: |>", 6);ft_write(2, (buff3 + 50), 50); write(2, "<|", 2);
	write(2, "\nNEXT BUFF\n", 11);
	write(2, "C: |>", 6);write(2, &buff4, 50); write(2, "<|", 2);
	write(2, "\nA: |>", 6);ft_write(2, (buff4 + 50), 50); write(2, "<|\n", 3);
	return 0;
}
