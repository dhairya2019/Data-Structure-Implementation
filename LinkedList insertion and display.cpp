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
if(pos==0){
    temp->next=head;
    head=temp;
}
else{
    struct node* temp1 = head;
    for(int i=0;i<pos-1;i++){

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
Insert(11,0);  //2
Insert(9,1);  //2,3
Insert(19,2);  //4,2,3
Insert(10,3);  //4,5,2,3
Insert(4,4);
Insert(20,3);
display();

return 0;

}

