#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *right;
    struct node *left;
};

struct node *root = NULL;


void append();
void display();
void addafter();
void add_at_beginning();
void search_ele();
void delete_node();


void insertion_sort()
{
    struct node *temp = root;
    int len = length();
    int i, j, val;

    for(i = 1; i < len; i++)
    {
        j = i;
        while((j > 0) && (temp->right->data > temp->data))
        {
            val = temp->right->data;
            temp->right->data = temp->data;
            temp->data = val;
            temp = temp->right;
            j--;
        }
    }
}

int main()
{

    while(1){
            system("cls");
        int ch;
        printf("Welcome, select an option to continue\n");
        printf("1. Create a node\n");
        printf("2. Add after\n");
        printf("3. Add at beginning\n");
        printf("4. Search for an element\n");
        printf("5. Delete a node\n");
        printf("6. Display list\n");
        printf("7. Exit\n");
        printf("8. Sort\nYour choice: ");
        scanf("%d", &ch);

        switch(ch){
        case 1:
            append();
            printf("Node create successfully\n");
            printf("\n");
            break;
        case 2:
            addafter();
            printf("\n");
            break;
        case 3:
            add_at_beginning();
            break;
        case 4:
            search_ele();
            break;
        case 5:
            delete_node();
            break;
        case 6:
            printf("Printing list data\n");
            printf("\n");
            display();
            break;
        case 7:
            exit(1);
            break;
        case 8:
            insertion_sort();
            break;
        default:
            printf("Invalid input!");
            printf("\n");
        }

        getch();
    }
    return 0;
}

void append(){
    struct node *temp, *p;

    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->right = NULL;
    temp->left = NULL;

    if (root == NULL){
        root = temp;
    } else {
        p = root;
        while (p->right != NULL){
            p = p->right;
        }
        p->right = temp;
        temp->left = p;
    }
}


void display(){
    struct node *temp = root;

    if(temp == NULL){
        printf("List is empty\n");
    } else {

        while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->right;
        }
    }
}

int length(){
    struct node *temp = root;
    int count = 0;

    while(temp != NULL){
        count++;
        temp = temp->right;
    }

    return count;
}

void addafter(){
    struct node *temp, *p;
    int len = length();
    int loc, i = 1;

    printf("Enter location: ");
    scanf("%d", &loc);

    if(loc > len){
        printf("Invalid location!\n");
        printf("List contains %d node(s)\n", len);
    } else {
        temp = (struct node*)malloc(sizeof(struct node));
        p = root;

        printf("Enter data: ");
        scanf("%d", &temp->data);
        temp->right = NULL;
        temp->left = NULL;

        while (i < loc){
            p = p->right;
            i++;
        }

        temp->right = p->right;
        p->right->left = temp;
        temp->left = p;
        p->right = temp;

        printf("\n");
        printf("%d added at location %d successfully.", temp->data, (loc+1));
    }
}

void add_at_beginning(){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->left = NULL;
    temp->right = NULL;

    if(root == NULL){
        root = temp;
    }
    else {
        temp->right = root;
        root->left = temp;
        root = temp;
    }


    printf("\n");
        printf("%d added at beginning successfully.", temp->data);

}

void delete_node(){
    struct node *temp = NULL;
    int loc;
    printf("Enter location of node to be deleted: ");
    scanf("%d", &loc);
}

void search_ele(){
    struct node *temp = root;
    int ele, pos = 1, len = length();
    printf("Enter data: ");
    scanf("%d", &ele);

    if(temp == NULL){
        printf("Invalid search, empty list\n");
    } else{
        while(pos <= len){
            if(temp->data == ele){
                printf("Found %d at position %d", ele, pos);
                return;
            }
            pos++;
            temp = temp->right;
        }

        printf("Not found\n");
    }
}


