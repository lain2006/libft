










#include <unistd.h>
#include <libstr.h>
#include <libprint.h>

void				ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}
