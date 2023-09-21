#include"get_next_line_bonus.h"

char *ft_free(char **str)
{
    free(*str);
    *str=NULL;
    return(NULL);
}

char *clean_mem(char *men)
{
    char *new_mem:
    char *ptr;
    int len;

    ptr = ft_strchr(mem,'\n');
    if (!ptr)
    {
        new_mem = NULL;
        return(ft_free(&mem));
    }
    else
            len = (ptr - men) +1;
    if (!mem[len])
    
        return(ft_free(&mem));
    return(new_mem);
    
    
}

char *new_line(char *mem)
{
    char *line;
    char *ptr;
    int len;

    ptr = ft_strchr(mem, '\n');
    len = (ptr - mem) + 1;
    line = ft_substr(mem ,0,len)
}