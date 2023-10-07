#include<iostream>

using namespace std;


void printArray(int a[], int size){
    for(int i = 0; i<size; i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    int a[] = {5,3,2,6,9,3,-1,0};
    int size = sizeof(a)/sizeof(a[0]);
    printArray(a, size);

}