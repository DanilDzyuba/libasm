/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clauren <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:47:37 by clauren           #+#    #+#             */
/*   Updated: 2020/10/17 15:24:31 by clauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_LIBASM_H
# define LIBASM_LIBASM_H

# include <stdio.h>
# include <string.h>
# include <sys/types.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

size_t		ft_strlen(char *str);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
size_t		ft_read(int fd, void *buf, size_t nbyte);
size_t		ft_write(int fd, void *buf, size_t nbyte);
char		*ft_strdup(const char *s1);
#endif
