// Program to find smallest and largest  and count nodes
// elements in singly linked list.
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node* next;
};


int largestElement(struct Node* head)
{

    int max = INT_MIN;


    while (head != NULL)
    {


	if (max < head->data)
	    max = head->data;
	head = head->next;
    }
    return max;
}


int smallestElement(struct Node* head)
{

    int min = INT_MAX;


    while (head != NULL)
	{

       if (min > head->data)
	    min = head->data;
       head = head->next;
	}
    return min;
}


void push(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data = data;
 newNode->next = (*head);
  (*head) = newNode;
}

void printList(struct Node* head)
{
    while (head != NULL)
    {
	printf("%d -> ", head->data);
	head = head->next;
    }

}
  int countNodes(struct Node* head)
{
    struct Node* temp = head;
    int result = 0;
    if (head != NULL) {
	do {
	    temp = temp->next;
	    result++;
	} while (temp != head);
    }

    return result;
}

void main()
{

    struct Node* head = NULL;
clrscr();
     push(&head, 15);
    push(&head, 14);
    push(&head, 13);
    push(&head, 22);
    push(&head, 17);
    Printf("List IS..");

printf("Maximum Value is");
    printf("Largest Elemet is %d",largestElement(head));
  printf("Minimum  Elemet is %d",smallestElement(head));
printf("Total No of Elements is %d",countNodes(head));
  getch();
}