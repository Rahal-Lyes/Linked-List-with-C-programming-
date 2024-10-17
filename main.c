#include<stdio.h>
#include<stdlib.h>

//create the node of a single list
struct node{
int data;
struct node *link;
};

//function count number of node
int count_of_nodes(struct node * tete){
  int count=0;
  if(tete==NULL)
      printf("Linked list is empty");

  struct node * ptr=NULL;
  ptr=tete;
  while(ptr != NULL){
    count++;
    ptr=ptr->link;
  }    
  return count;
}

//function display element in node
void print_data(struct node *head){
  if(head ==NULL)
      printf("list is empty");

  struct node *temp=head;
  while(temp !=NULL){
    printf("%d\t",temp->data);
    temp=temp->link;
  }
}
int main(){
  struct node *head=NULL;
  struct node * head2=NULL;
  struct node* head3=NULL;

  head=(struct node *)malloc(sizeof( struct node));
  head2=(struct node*)malloc(sizeof(struct node));
  head3=(struct node*)malloc(sizeof(struct node));

  head->data=10;
  head->link=head2;
  head2->data=20;
  head2->link=head3;
  head3->data=3;
  head3->link=NULL;
int count=count_of_nodes(head);
printf("%d",count);
printf("\n");
print_data(head);
}
