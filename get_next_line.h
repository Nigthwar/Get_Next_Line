#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<limits.h>


size_t ft_strlcpy(chat *dst, char *src, size_t dstsize);
size_t tf_strlen(char *s);
char *ftstrjoin(char *s1, char *s2);
char *ft_strdup(char *s1);
char ft_strchr(char *s, int c);
char *ft_substr(char *s, unsifned int start, size_t len);
char *get_next_line(int fd);
char *ft_free(char **str);

#endif