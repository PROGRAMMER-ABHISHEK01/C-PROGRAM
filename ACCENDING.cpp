//Q--> W.A.P IN C++ TO SORTING OF ARRAY IN ACCENDIND ORDER.
// W.A.P IN C++ Program to Sort an Array in Ascending Order
#include <iostream>
using namespace std;

int main()
{
    int i, j, size, temp,arr[500];
    cout << "ENTER SIZE OF ARRAY: ";
    cin >> size;
    cout << "ENTER ELEMENT: ";
    for (i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    for (i = 0; i < size; i++)
	{
        for (j = i; j < size; j++)
		{
            if (arr[i] > arr[j+1])
			{
                temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }
        }
}
    cout << "ANS IS ACCENDING ORDER" << endl;
    for (i = 1; i <= size; i++){
     cout << arr[i] <<",";   
    }
    return 0;
}
