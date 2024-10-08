#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
typedef struct node NODE;
NODE *header = NULL, *newptr = NULL, *ptr, *ptr1;
void traverse();
void insertfront();
void insertend();
void insertany();
void deletefront();
void deleteend();
void deleteany();
void display();  
void main() {
    int no;
    char c;
    header = (NODE*)malloc(sizeof(NODE));  
    header->link = NULL;
    printf("\nOPERATIONS ON SINGLE LINKED LIST\n\n");
    do {
        printf("1.TRAVERSE\n2.INSERT AT FRONT\n3.INSERT AT END\n4.INSERT AT ANY POSITION\n5.DELETE FROM FRONT\n6.DELETE FROM END\n7.DELETE FROM ANY POSITION\n8.DISPLAY LIST\n9.EXIT\n\nEnter your choice: ");
        scanf("%d", &no);
        if (no == 9)
            break;
        else {
            switch(no) {
                case 1: traverse(); break;
                case 2: insertfront(); break;
                case 3: insertend(); break;
                case 4: insertany(); break;
                case 5: deletefront(); break;
                case 6: deleteend(); break;
                case 7: deleteany(); break;
                case 8: display(); break;  
                default: printf("\t\tINVALID ENTRY\n"); break;
            }
            printf("\nDo you want to continue (y/n):");
            scanf(" %c", &c);
        }
    } while(c == 'y' || c == 'Y');
}
void insertfront() {
    newptr = (NODE*)malloc(sizeof(NODE));
    if (newptr == NULL) {
        printf("\nInsufficient memory\n");
        return;
    }
    printf("\nEnter the element: ");
    scanf("%d", &newptr->data);
    newptr->link = NULL;
    newptr->link = header->link;  
    header->link = newptr;  
}
void insertend() {
    newptr = (NODE*)malloc(sizeof(NODE));
    if (newptr == NULL) {
        printf("\nInsufficient memory\n");
        return;
    }
    printf("\nEnter the element: ");
    scanf("%d", &newptr->data);
    newptr->link = NULL;
    ptr = header;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = newptr;  
}
void insertany() {
    int key;
    newptr = (NODE*)malloc(sizeof(NODE));
    if (newptr == NULL) {
        printf("\nInsufficient memory\n");
        return;
    }
    printf("\nEnter the key after which to insert: ");
    scanf("%d", &key);
    printf("\nEnter the element: ");
    scanf("%d", &newptr->data);
    ptr = header->link;
    while (ptr != NULL && ptr->data != key) {
        ptr = ptr->link;
    }
    if (ptr == NULL)
        printf("\nKey not found\n");
    else {
        newptr->link = ptr->link;  
        ptr->link = newptr;
    }
}
void deletefront() {
    if (header->link == NULL) {
        printf("\nEmpty list\n");
        return;
    }
    ptr = header->link;
    header->link = ptr->link;  
    printf("\nDeleted element is %d\n", ptr->data);
    free(ptr); 
}
void deleteend() {
    if (header->link == NULL) {
        printf("\nEmpty list\n");
        return;
    }
    ptr = header;
    ptr1 = header->link;
    if (ptr1->link == NULL) {  
        header->link = NULL;
        printf("\nDeleted element is %d\n", ptr1->data);
        free(ptr1);
        return;
    }
    while (ptr1->link != NULL) {
        ptr = ptr1;
        ptr1 = ptr1->link;
    }
    ptr->link = NULL;  
    printf("\nDeleted element is %d\n", ptr1->data);
    free(ptr1);
}
void deleteany() {
    int key;
    if (header->link == NULL) {
        printf("\nEmpty list\n");
        return;
    }
    printf("\nEnter the key to delete: ");
    scanf("%d", &key);
    ptr = header;
    ptr1 = header->link;
    while (ptr1 != NULL && ptr1->data != key) {
        ptr = ptr1;
        ptr1 = ptr1->link;
    }
    if (ptr1 == NULL)
        printf("\nKey not found\n");
    else {
        ptr->link = ptr1->link;  
        printf("\nDeleted element is %d\n", ptr1->data);
        free(ptr1);
    }
}
void traverse() {
    if (header->link == NULL) {
        printf("\nList is empty\n");
        return;
    }
    printf("\nElements are:\n\t\t");
    ptr = header->link;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}
void display() {  
    if (header->link == NULL) {
        printf("\nList is empty\n");
        return;
    }
    printf("\nDisplaying the linked list:\n\t\t");
    ptr = header->link;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}
