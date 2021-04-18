#include"include.h"


struct node *head = NULL;
size_t length = 0;


void Create_list(void){
    struct node *ptr;
    ptr = (struct node *) malloc(sizeof(struct node));

    if(ptr == NULL){
        printf("Unable to create node \n");
        exit(1);
    }
    printf("Enter the value in node : ");
    scanf("%d",&ptr->info);
    ptr->link = NULL;

    if(head == NULL)
        head = ptr;

    else{
        struct node *next;
        next = head;

        while(next->link != NULL)
            next = next->link;
        
        next->link = ptr;
    }
}

void Print(void){
    struct node *ptr;
    ptr = head;

    while(ptr != NULL){
        printf("value in node : %d\n", ptr->info);
        ptr = ptr->link;
    }
}

size_t* Length(void){
    length = 0;
    struct node *ptr;
    ptr = head;

    while(ptr != NULL){
        length++;
        ptr = ptr->link;
    }

    return &length;
}

void Delete(size_t pos){
    size_t* size = Length();
    if(pos > length){
        printf("\t\tOut of Range \n Length of List : %ld\n",*size);
        return;
    }

    struct node *ptr, *temp;
    ptr = head;

    if(pos == 1){
        head = ptr->link;
        free(ptr);
        return;
    }

    int i = 1;
    if(pos == *size){
        while(i < pos-1){
            ptr = ptr->link;
            i++;
        }
        temp = ptr->link;
        ptr->link = NULL;
        
        free(temp);
        return;
    }

    i = 1;
    while(i < pos-1){
        ptr = ptr->link;
        i++;
    }
    
    temp = ptr->link;
    ptr->link = temp->link; 

    free(temp);
}

