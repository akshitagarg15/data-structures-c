#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node * newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}



int main(){
    /*
    // root node
    struct Node *p;
    p=(struct Node *)malloc(sizeof(struct Node));
    p->data=2;
    p->left=NULL;      
    p->right=NULL;

    // left node
    struct Node *p1;
    p1->data = 1;
    p1=(struct Node *)malloc(sizeof(struct Node));
    p1->left=NULL;      
    p1->right=NULL;

    // right node
    struct Node *p2;
    p2->data = 4;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->left = NULL;
    p2->right = NULL;
    */

    // root node
    struct Node *p=createNode(2);
    struct Node *p1=createNode(1);
    struct Node *p2=createNode(4);


    // linking root node with left and right node
    p->left = p1;
    p->right = p2;

    return 0;
}