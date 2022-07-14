#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t	i;
	size_t	j;
	char* res;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
  res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			res[j] = s[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}