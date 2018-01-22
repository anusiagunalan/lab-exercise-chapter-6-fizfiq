//muhammad hafiz afiq
#include <iostream>
using namespace std;

int ary[]={0,1,2,3,4,5,6,7,8,9,10/*insert your own value*/};


int main()
{
int n, result=0;

	for(int n=1;n<=10;n++/* n is not more than 10*/)
	{
		result += ary[n];
	}
	cout<<result;
	

}
