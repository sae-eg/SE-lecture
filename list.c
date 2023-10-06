#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct list {
	struct list *next;
	int data;
};

void print_list(struct list *p){
	while (p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

int main(){
	struct list *p, *q, *head;
	p = malloc(sizeof(struct list));
	p->data = 1;
	head = p;

	for (int i = 2; i <= 100; i++){
		q = malloc(sizeof(struct list));
		q->data = i;
		p->next = q;
		p = q;
		q = q->next;
	}
	q = NULL;
	print_list(head);
	exit(0);
}