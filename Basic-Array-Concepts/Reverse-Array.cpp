#include<iostream>
using namespace std;
/*####### Description ###############
    input array element: 1,2,3,4,5
    output:              5,4,3,2,1
 ####################################
*/
int main()
{   int len,i,temp,j;
    cout<<"enter the array length:";
    cin>>len;
    int arr[len];
    int start=0,last=len-1;
    cout<<"now enter the element:";
    for(i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    //####### logic ##########
    while(start<last)  
    {
        temp=arr[start];
        arr[start]=arr[last];
        arr[last]=temp;
        start++;
        last--;

    } 
    //######################
      
    cout<<"output array:";
    for(i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}