/*









*/

#include <stdlib.h>
#include <libstr.h>

void				ft_strdel(char **as)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}
