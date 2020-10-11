#include <stdio.h>
#include "libft.h"

void	del(void *content)
{
	content = NULL;
}

int	main()
{
	printf("========= ft_lstnew =======\n\n");

	t_list *elem1 = ft_lstnew("a");
	t_list *elem2 = ft_lstnew("i");
	printf("adress: %p, content: %s, n_adress: %p\n", elem1, elem1->content, elem1->next);
	printf("adress: %p, content: %s, n_adress: %p\n", elem2, elem2->content, elem2->next);
	t_list *elem3 = ft_lstnew("u");
	t_list *elem4 = ft_lstnew("e");
	t_list *elem5 = ft_lstnew("o");

	printf("\n\n\n========= ft_lstadd_front =======\n\n");

	t_list **list;
	t_list *tmp;
	list = &elem1;
	ft_lstadd_front(list, elem2);
	ft_lstadd_front(list, elem3);
	ft_lstadd_front(list, elem4);
	ft_lstadd_front(list, elem5);
	tmp = *list;
	while (*list)
	{
		printf("adress: %p, content: %s, n_adress: %p\n", *list, (*list)->content, (*list)->next);
		*list = (*list)->next;
	}
	*list = tmp;
	printf("\n\n\n========= ft_lstsize =======\n");

	int len = ft_lstsize(*list);
	printf("%d\n", len);

	printf("\n\n\n========= ft_lstlast =======\n");

	t_list *last = ft_lstlast(*list);
	printf("adress: %p, content: %s, n_adress: %p\n", last, last->content, last->next);

	printf("\n\n\n========= ft_lstadd_back =======\n");

	t_list **list2;
	t_list *tmp2;
	t_list *elem11 = ft_lstnew("a");
	t_list *elem22 = ft_lstnew("i");
	t_list *elem33 = ft_lstnew("u");
	t_list *elem44 = ft_lstnew("e");
	t_list *elem55 = ft_lstnew("o");
	list2 = &elem11;
	ft_lstadd_back(list2, elem22);
	ft_lstadd_back(list2, elem33);
	ft_lstadd_back(list2, elem44);
	ft_lstadd_back(list2, elem55);
	tmp2 = *list2;
	while (*list2)
	{
		printf("adress: %p, content: %s, n_adress: %p\n", *list2, (*list2)->content, (*list2)->next);
		*list2 = (*list2)->next;
	}
	*list2 = tmp2;

	printf("\n\n\n========= ft_lstdelone =======\n");

	ft_lstdelone(*list2, &del);
	tmp2 = *list2;
	while (*list2)
	{
		printf("adress: %p, content: %s, n_adress: %p\n", *list2, (*list2)->content, (*list2)->next);
		*list2 = (*list2)->next;
	}
	*list2 = tmp2;
}
