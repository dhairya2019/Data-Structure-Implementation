#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10000
int arr[MAX];
int top=-1;

void push(int data){
   if(top==MAX-1){
       return;
   }
   arr[++top]=data; 
}

void pop(){
    top=top-1;
    
}

void display(){
    int max=arr[top];
    
    for(int i=0;i<=top;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
        else
        continue;
    }
    cout<<max<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++){
    int data=0,a=0;
    cin>>a;
    if(a==1)
    cin>>data;
    
        
        switch(a){
            case 1:
            push(data);
            continue;
             
            case 2:
            pop();
            continue;
             
            case 3:
            display();
            continue;
            
            default:
            cout<<"Invalid Entry Selected"<<endl;
            break;
        }
    }  
    return 0;
}
