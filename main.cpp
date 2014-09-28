#include "tree.cpp"
#include <ctime>
#include <cstdlib>
#include <stdio.h>
int main(){
	srand(time(NULL));
	Tree *t = new Tree();
	int x;
	t->insert(4);
	t->insert(3);
	t->insert(2);
	t->insert(1);
	t->insert(-1);
	t->insert(5);
	t->traverse();
	t->printAdd();
}