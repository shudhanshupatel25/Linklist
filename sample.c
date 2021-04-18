#include"include.h"



int main(){
    size_t* length;
    size_t i = 1, pos;
    int choice;

    while(i){
        printf("Enter value of the operation to be perfrom in the List :\n");
        printf("1. Create List\n");
        printf("2. Print the List\n");
        printf("3. Length of the List\n");
        printf("4. Delete the Element in the List\n");
        printf("5. Exit\n");
        printf("Enter your choide  :  ");

        scanf("%d",&choice);

        switch (choice){
            case 1:
                Create_list();
                break;

            case 2:
                Print();
                break;
            
            case 3:
                length = Length();
                printf("Length of the List is : %ld\n", *length);
                break;
            
            case 4:
                printf("Enter the location of the Element : ");
                scanf("%ld",&pos);
                Delete(pos);
                break;
            
            case 5:
                exit(1);
        }
    }

    return 0;
}
