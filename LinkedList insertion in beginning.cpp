#include <iostream>
using namespace std;

void input(int);
void display(void);

struct node* head;
struct node{
int data;
node* next;
};

void input(int x){
struct node* temp = new node();
temp->data=x;
temp->next=head;
head=temp;
}

void display(){
struct node * temp =head;
cout<<"List is: ";
while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
}
cout<<endl;

}



int main()
{
head =NULL;
cout<<"How many numbers do you want to insert?"<<endl;
int cot,num;
cin>>cot;
for(int i=0;i<cot;i++){
    cin>>num;
    input(num);
    display();
}

return 0;
}
