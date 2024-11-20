/*######### Description ##########
now enter the element:1,2,3,2,3
output::
1 frequency 1 times
2 frequency 2 times
3 frequency 2 times
#################################
*/
#include <iostream>
using namespace std;
int main()
{   int count = 1,j,i,len;
    cout<<"enter the size of arrry:";
    cin>>len;
    int arr[len];
    bool array[len] = {false}; 
    cout<<"now enter the element:\n"; 
    for(i=0;i< len;i++)
    {
      cin>>arr[i];
    }
    cout<<"output::\n";
    
    for ( i = 0; i <len; i++) 
    {
        // Skip 
        if (array[i])
        {
            continue;
        }
            
        for ( j = i + 1; j < len; j++) 
        {
          
            if (arr[i] == arr[j]) 
            {
                array[j] = true;  
                count++;  
            }
        }

       cout<< arr[i] << " frequency " << count << " times" << endl;
       count=1;
      
    }
    return 0;
}



