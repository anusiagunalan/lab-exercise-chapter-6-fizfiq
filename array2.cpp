#include <iostream>
using namespace std;

int mark[5]={19,10,8,17,9};
int main()
{
	int x;
	//insert different value to the third element
	//tukar third element tu dengan value lain
	mark[2]=40;/*your valie*/
	
	cout<<"letakkan input = ";
	cin>>mark[x];
	//get user input and insert sub the third element
	//tukar the third element yang baru ditukar tu dengan input dari user
	

	//print the first element of the array
	cout<<"mark = "<<mark[0]<<endl;

	//print the ith element of the array
	cout<<"Ith element ="<<endl;
	cin>>mark[x-1];
	
	cout<<"mark[2] = "<<mark[2];
    
}
