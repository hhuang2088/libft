#include "libft.h"

char 	*ft_strjoin_with_delimiter(char *str1, char *str2, char *delim)
{
	char		*ret;
	char		*tmp;

	ret = ft_strjoin(str1, delim);
	tmp = ret;
	ret = ft_strjoin(ret, str2);
	free(tmp);
	return (ret);
}
