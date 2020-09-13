#include<iostream>
using namespace std;
class Stack{
  private:
   int top;
   int a[5];
  
  public:
   Stack(){
      top=-1;
      for(int i=0;i<=4;i++)
      a[i]=0;
   }
   
   bool isEmpty(){
       if(top==-1)
        return true;
       else
        return false;
       
   }
   
   bool isfull(){
       
       if(top==4)
        return true;
       else
        return false;
   }
   
   void push(int value){
       if(isfull()){
           cout<<"Stack overflow"<<endl;
       }
       else{
           top++;
           a[top]=value;
           cout<<value<<" is Inserted"<<endl;
              
       }
       
   }
   
   int pop(int pos){
       if(isEmpty()){
           cout<<"Stack underflow"<<endl;
       }
       else{
        int popValue = a[top];
        a[top]=0;
        top--;
        return popValue;
       }
       
   }
   
   int count(){
       
       return a[top+1];
   }
   
   int peek(int pos){
       if(isEmpty())
       {
           cout<<"Stack underflow"<<endl;
       }
       else{
           return a[pos];
       }
   }
   
   void change(int pos,int value){
       if(isEmpty()){
           cout<<"Stack underflow"<<endl;
       }
       else{
           a[pos]=value;
           cout<<"Item changed at location"<<pos<<endl;
       }
       
   }
   
   void display(){
       if(isEmpty()){
           cout<<"Stack underflow"<<endl;
       }
       else{
           for(int j=4;j>=0;j--){
               cout<<a[j]<<endl;
           }
       }
       
   }
   
};




int main(){
    Stack s1;
    int option,position,value;
    do{
    cout<<"Choose what operation you want to do on stack"<<endl;
    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.isEmpty"<<endl;
    cout<<"4.isFull"<<endl;
    cout<<"5.Count"<<endl;
    cout<<"6.Peek"<<endl;
    cout<<"7.Change"<<endl;
    cout<<"8.Display"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>option;
    switch(option){
        case 1 :
        cout<<"Enter your value to be inserted"<<endl;
        cin>>value;
        s1.push(value);
        break;
        
        case 2:
        s1.pop(position);
        break;
        
        case 3:
        cout<<s1.isEmpty()<<endl;
        break;
        
        case 4:
        cout<<s1.isfull()<<endl;
        break;
        
        case 5:
        cout<<"total number of elements are "<<s1.count()<<endl;
        
        case 6:
        cout<<"Enter position on which you want to peek"<<endl;
        cin>>position;
        cout<<"The element at"<<position<<"th position is "<<s1.peek(position)<<endl;
        break;
        
        case 7:
        cout<<"Enter position and element value on which you want to change"<<endl;
        cin>>position>>value;
        s1.change(position,value);
        break;
        
        case 8:
        cout<<"Printing elements in decreasing index"<<endl;
        s1.display();
        break;
            
    }
    }while(option!=0);
    
    return 0;
}
