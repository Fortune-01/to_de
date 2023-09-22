#include <stdlib.h>
#include "lists.h"
/** frees a linked list
 */

void free_list(list_t *head);
{
	list_t *tmp;
	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);

		head = tmp;
	}
}
