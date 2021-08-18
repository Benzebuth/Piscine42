#ifndef FT_BASE_H
# define FT_BASE_H

# include <unistd.h>
# include <errno.h>
# include <fcntl.h>
# include <libgen.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);

#endif
