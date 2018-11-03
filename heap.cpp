#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){
int largest = i;
int l = 2*i +1; //for left node
int r = 2*i + 2; //for right node
if(l<n && arr[l] > arr[largest]){
  largest =l;
} 
if(r<n && arr[r] > arr[largest]){
  largest = r;
}
if(largest!=i){
  swap(arr[i],arr[largest]);
  heapify(arr,n,largest);
}
}
void heapsort(int arr[],int n){
for(int i=(n/2)-1;i>=0;i--){
  heapify(arr,n,i);
}
for(int i=n-1;i>=0;i--){ //one by one extract an element from heap
  swap(arr[0],arr[i]); //more current root to end
  heapify(arr,i,0);
}

}
void swap(int a,int b){
int temp = a;
a = b;
b = temp;
  }
int main(){
int arr[5];
for(int i=0;i<5;i++){
  cin>>arr[i];
}
heapsort(arr,5);
for(int i=0;i<5;i++){
  cout<<arr[i]<<" ";
}


  return 0;
}
