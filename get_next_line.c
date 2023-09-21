/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguerrei <cguerrei@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:11:44 by cguerrei          #+#    #+#             */
/*   Updated: 2023/09/21 16:11:44 by cguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

char *ft_free(char **str)
{
    free(*str);
    *str = NULL;
    return(NULL);
}

char *clean_storage(char *storage)
{
    char *new_storage;
    char *ptr;
    int len;

    ptr = ft_strchr(storage, '\n');
    if (!ptr)
    {
        new_storage = NULL;
        return(ft_free(&storage));
    }
    else
            len = (ptr - storage) + 1;
    if (!storage[len])
    
        return(ft_free(&storage));
    new_storage = ft_substr(storage, len , ft_strlen(storage) - len);
    ft_free(&storage);
    if (!new_storage)
    
        return(NULL);
    return(new_storage);  
    
}

char *new_line(char *storage)
{
    char *line;
    char *ptr;
    int len;

    ptr = ft_strchr(storage, '\n');
    len = (ptr -storage) + 1;
    line = ft_substr(stroage,0,len);
    if (!line)
    
        return(NULL);
       
}

char *readbuffer(int fd, char *storage)
{
    int rid;
    char *buffer;

    rid = 1;
    buffer = malloc (sizeof(char) * (BUFFER_SIZE +1));
    if (!buffer)
        return(ft_free(&storage));
    buffer[0] = '\n';
    while (rid > 0 && !ft_strchr(buffer, '\n'))
    {
        rid = read(fd,buffer,BUFFER_SIZE);
        if (rid > 0)
        {
            buffer[rid] = '\0';
            storage = ft_strjoin(storage,buffer);
        }
        
    }
    free(buffer);
    if (rid == -1)
    
        return(ft_free(&storage));
    return (storage);  
    
}

char *get_next_line(int fd)
{
    static char *storage = {0};
    char *line;
    if (fd < 0)
    
        return(NULL);
    if ((storage && !ft_strchr(storage, '\n'))|| !storage)
    
        storage = readbuffer(fd,storage);
    if (!storage)
    
        return(NULL);
    line = new_line(storage);
    if (!line)
    
        return(ft_free(&storage));
    storage = clean_storage(storage);
    return(line);
    
    
    
    
    
}