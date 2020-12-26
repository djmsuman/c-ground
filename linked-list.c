#include<stdio.h>
#include<stdlib.h>

struct linked_list
{
	int number;
	struct linked_list *next;
};

typedef struct linked_list node; //Node type defined

void create(node *p);
void print(node *p);
int count(node *p);

int main()
{
	node *head;

	head = (node *) malloc(sizeof(node));
	create(head); //Creating the list

	printf("Head is at %p.\n", head);
	printf("%d items are in the list.\n", count(head));
        printf("Items in the list are: ");
        print(head);
        printf("\n");

        return 0;
}

void create(node *list)
{
	printf("Input a number [press '0' to end]:");
	scanf("%d", &list->number);

	/*-------------------------------------------  CREATE CURRENT NODE ----------------------------------*/
	if (list->number == 0)
	{
		list->next = NULL;
	}
	else //create next node
	{
		list->next = (node*) malloc(sizeof(node));
		create(list->next);
	}
}

void print(node *list)
{
	if (list->next != NULL)
	{
		printf("%d ", list->number);          /*print current item */

		if (list->next->next == NULL) {
                    printf("%d", list->next->number);
                } else {
                    print(list->next);				//move to next item
                }
        }
}

int count(node *list)
{
	if (list->next == NULL)
		return 1;
	else
		return 1 + count(list->next);
}
