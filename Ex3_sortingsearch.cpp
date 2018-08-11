#include <iostream>

using namespace std;

int main()
{
    int arr[100],mid,l=0,r=4,num,flag=0,p,size;
cout<<"Enter size of array:"<<endl;
cin>>size;
cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
if(arr[i]>arr[j]){
int t = arr[i];
arr[i] = arr[j];
arr[j] = t;
}
}
}
cout<<"Sorted array in ascending order:"<<endl;
for(int i=0;i<size;i++)
cout<<arr[i]<<endl;

    cout<<"Enter No to search:"<<endl;
    cin>>num;
  //  mid = (l+ r)/2;
    while(l<=r)
    {
        mid = (l+ r)/2;
        if(num==arr[mid]){
            flag = 1;
            p = mid;
            //cout<<"No is found at "<<mid;
            break;
        }
        else{
            if(num>arr[mid]){
                l = mid +1;
            }
            else{
                r = mid -1;
            }
            
            }
   }
    if(flag==1){
        cout<<"No is found at index "<<mid<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}

