#include<iostream>
using namespace std;
void tower_hanoi(int n,char first,char aux,char dest)
{
	if(n==1)
	{
		cout<<"Move disk 1 from "<<first<<" to "<<dest<<endl;
		return;
	}
    tower_hanoi(n-1,first,dest,aux);
      cout<<"Move disk "<<n<<" from "<<first<<" to "<<dest<<endl;
    tower_hanoi(n-1,aux,first,dest);
}
int main()
{
	int n;
	cout<<"enter the no of disks - ";
	cin>>n;
	tower_hanoi(n,'A','B','C');
}
