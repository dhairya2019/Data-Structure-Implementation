#include<iostream>
using namespace std;

struct node{
int data;
struct node* next;
};

struct node* head;

void Insert(int data, int pos){
struct node* temp = new node();
temp->data=data;
if(pos==1){
    temp->next=head;
    head=temp;
}
else{
    struct node* temp1 = head;
    for(int i=1;i<pos-1;i++){

     temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;



}
}

void display(){
struct node* temp2 = head;
while(temp2!=NULL){
    cout<<temp2->data<<endl;
    temp2=temp2->next;

}

}



int main(){
head=NULL;
Insert(2,1);  //2
Insert(3,2);  //2,3
Insert(4,1);  //4,2,3
Insert(5,2);  //4,5,2,3
display();

return 0;

}

