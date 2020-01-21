#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"


typedef struct node {
	struct node *next;
	char *data_type, *variable_name;
	YYSTYPE data_value;
}node;


typedef struct symtab {
	node *root;
}symtab


node* isPresent(symtab *stab, char *variable_name) {
	if(stab->root == NULL) {
		return NULL;
	}
	else {
		node *current = stab->root;
		while(current != NULL) {
			if(strcmp(current->variable_name, variable_name) == 0) {
				return current;
			}
			current = current->next;
		}
		if(current == NULL) {
			return NULL;
		}
	}
	return NULL;
}


































