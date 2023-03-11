#include "push_swap.h"

struct node {
    int data;
    struct node *next;
};



void execution_ss_command()
{
    struct node *tmp = NULL;

}



int main(int argc, char **argv)
{
	int input;
	int i;
	struct node *head = NULL;
    struct node *current = NULL;
    struct node *new_node = NULL;

	i = 0;
	while (argv[i])
	{
		input = ft_atoi(argv[i]);
		new_node = malloc(sizeof(struct node));
        new_node->data = input;
        new_node->next = NULL;
        
        if (!head) 
		{
            head = new_node;
            current = new_node;
        } 
		else 
		{
            current->next = new_node;
            current = new_node;
        }
		i++;
	}

	//表示
	current = head;
	printf("before swap;");
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
    printf("\n");


	if (argc == 2)
		return (0);
	else if (argc == 3)
	{
		execution_ss_command();
	}



	current = head;
	printf("after swap;");
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
    printf("\n");

    // // リスト構造の解放
    // current = head;
    // while (current != NULL) {
    //     struct node *temp = current;
    //     current = current->next;
    //     free(temp);
    // }

    return 0;
}

//