#include<iostream>
using namespace std;
int main(){
	int a[100],index,e,n,size,flag,p;
        cout<<"Enter size of array:"<<endl;
        cin>>size;
        cout<<"Enter elements of array:"<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"enter 1 to insert a new element"<<endl<<"2 to delete an element."<<endl<<"3 to find location of element"<<endl<<"4 to display array"<<endl;
	cin>>n;
	switch(n){
	    case 1:
             cout<<"Enter index and element to insert respectively:"<<endl;
	    	cin>>index>>e;
	    	   	
	for(int i=size-1;i>=index;i--){
		a[i+1] = a[i];
	}
            a[index-1] = e;
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	    	
	    	break;
	    	case 2:
                cout<<"Enter index of element to delete:"<<endl;
	    	cin>>index;
	    	for(int i=0;i<size;i++){
	    	    if(i==index){
	    	        a[i] = a[i+1];
	    	        index++;
	    	    }
	    	    }
	    	    for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	    		break;
	    	case 3:
                cout<<"Enter element to find its location:"<<endl;
	    	cin>>e;
	    	
	for(int i=0;i<size;i++){
		if(e==a[i]){
                  flag =1;
                   p=i;
                  break;
                 }
             else{flag=0;}
	}
        if(flag==1){
        cout<<e<<" is at index "<<p<<endl;
         }
         else{cout<<"Not found"<<endl;}
	break;
               
               case 4: 
            cout<<"Array:"<<endl;
             for(int i=0;i<size;i++){

             cout<<a[i]<<endl;
       }
       break;
	default:
	cout<<"Invalid choice"<<endl;
	}
	
	return 0;
	
	
}

