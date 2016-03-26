










#include <unistd.h>
#include <libstr.h>
#include <libprint.h>

void				ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
