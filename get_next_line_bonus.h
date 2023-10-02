#ifndef GET_NEXT_LINE_BONUS_H
#define GET_NEXT_LINE_BONUS_H

#include<limits.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>

size_t ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t ft_strlen(char *s);
char *ft_strjoin(char *s1, char *s2);
char *ft_strdup(char *s1);
char *ft_strchr(char *s,int c);
char *ft_substr(char *s,int c);
char *get_next_line(int fd);
char *ft_free(char **str);

#endif