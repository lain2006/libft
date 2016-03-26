











#include <libmem.h>
#include <libstr.h>

void				ft_strclr(char *s)
{
	ft_bzero(s, ft_strlen(s));
}
