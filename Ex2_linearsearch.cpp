#include <iostream>

using namespace std;

int main()
{
    int a[100],n,p,flag,size;
	cout<<"Enter size of array:"<<endl;
	cin>>size;
	cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter number to find in array"<<endl;
    cin>>n;
    for(int i=0;i<size;i++){
        if(n==a[i]){
            p = i;
            flag=1;
            break;
        }
        else{
            flag =0;
        }
    }
    if(flag==1){
        cout<<n<<" found at "<<p+1<<" position"<<endl;
    }
    else{
        cout<<"Not found";
    }

    return 0;
}
