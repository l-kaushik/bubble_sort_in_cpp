#include<iostream>

using namespace std;


void printArray(int a[], int size){
    for(int i = 0; i<size; i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

void bubbleSort(int a[], int size){
        int temp, isSorted;
    for(int i = 0; i<size-1; i++){ // loop for passes
        isSorted = 1;
        for(int j = 0; j<size-i-1; j++){ // for comparison in each pass
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSorted = 0; 
            }
        }
        if(isSorted){  // checking if array is already sorted or not
            return; 
        }
    }
}


int main()
{
    int a[] = {5,3,2,6,9,3,-1,0};
    int size = sizeof(a)/sizeof(a[0]);
    bubbleSort(a, size);
    printArray(a, size);

}