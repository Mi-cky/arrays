//get the array elements from the user and printing out the array
#include <iostream>
using namespace std;

int main(){
    int arraySize;
    int *ptr = &arraySize;
    cout<<"Enter the array size"<<endl;
    cin>>arraySize;
    int myArray[arraySize];
    cout<<"Enter the elements "<<endl;
    for (int i = 0; i <= arraySize ; i++)
    {
        cin>>myArray[i];
    }
    cout<<"printing the result array"<<endl;
    for (int i = 0; i <= arraySize; i++)
    {
        cout<<myArray[i]<<" ";
    }
    
    // cout<<"printing the array in reverse"<<endl;
    // for (int j = arraySize ; j <= arraySize; j--)
    // {
    //     cout<<arraySize[ptr]<<" ";
    // }
    
    
    return 0;
}