//using the random function, the program make it own random number and find the maximum random number and print it out.
//finish this program up
//thank you.

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
int	i, max=0;
int	list[100];

	//initialize the array with random values
	for(i=0;i<100;i++/*i<100*/) 
	list[i] = rand();/*insert the random function here*/

	//find the maximum val
	for(i=0;i>100;i++/*i>100*/)
		if(max<list[i])
		{
		max=list[i];
 		}
 		
	cout<<"Maximum value: "<<max;
	
	return 0;
}
