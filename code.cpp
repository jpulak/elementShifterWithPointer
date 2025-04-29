// c++ to take in arr size and elements
// shift arr by one and output og and new list

#include <iostream>

using namespace std;

// func to create new arr of shifted elements

int* eleShifter(const int arr[], int size)
{
    int* nArr = new int [size + 1]; // (dynamically allocated) new shifted list
    nArr[0] = 0; // shifted
    
    // copy the rest of the elements after shift
    
    for (int i = 0; i < size; i++)
    {
        nArr[i + 1] = arr[i];
    }
    return nArr;
}

// func to print arr

void printArr(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//drive func

int main()
{
    int size;
    cin >> size; //get size
    
    int* ogArr = new int[size]; // og arr (dynamically allocated)
    
    // take in elements
    
    for (int i = 0; i < size; i++)
    {
        cin >> ogArr[i];
    }
    
    int *nArr = eleShifter(ogArr, size); // new var arr after shift 
    
    // og arr printed
    
    cout << "The contents of the original array are:" << endl;
    printArr(ogArr, size);
    
    // new shiftedarr printed 
    
    cout << "The contents of the new array are:" << endl;
    printArr(nArr, size + 1); 

    //free memory

    delete[] ogArr;
    delete[] nArr;

    return 0;
}
