#include<iostream>
using namespace std;
/*######### Description #############
input element: 1,2,3,4,5
output: 
    maximum element:5
    minimum element:1
####################################
*/
int main()
{
    int i,min,max,arr_length;
    cout<<"Enter the length of array::";
    cin>>arr_length;
    int arr[arr_length];
    cout<<"now,enter the element:\n";
    for(i=0;i<arr_length;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<arr_length;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"Maximum element:"<<max;
    cout<<"\nMininum element:"<<min;
    return 0;

}
