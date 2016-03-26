











#include <string.h>

typedef struct		s_node
{
	void			*content;
	size_t			size;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct		s_dblist
{
	t_node			*start;
	t_node			*end;
	size_t			nb_nodes;
}					t_dblist;

t_dblist			*create_list(void);
t_node				*create_node(void *content, size_t size);
t_node				*add_node_end(t_dblist **list, t_node *node);
t_node				*add_node_start(t_dblist **list, t_node *node);
void				swap_nodes(t_node **n1, t_node **n2);
void				remove_node(t_dblist **list, t_node *node);
void				clear_list(t_dblist **list);
t_node				*iter_list(t_dblist **list, int (*f)(t_node *));

/*
** libft
*/

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
