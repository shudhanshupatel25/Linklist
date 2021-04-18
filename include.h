#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct  node *link;
};


void Create_list(void);
void Print(void);
size_t* Length(void);
void Delete(size_t);