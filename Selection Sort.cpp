#include<iostream>
using namespace std;

void sort(int a[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<=n-1;j++){
            if(a[j]<a[min])
              min=j;
        }
        int swap=a[i];
        a[i]=a[min];
        a[min]=swap;
    }
}


int main(){

int a[]={2,3,7,5,1,4,6};
int n = sizeof(a)/sizeof(a[0]); 
sort(a,n);
for(int i=0;i<6;i++)
cout<<a[i]<<endl;
return 0;
}
