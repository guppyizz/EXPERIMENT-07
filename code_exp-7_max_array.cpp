#include<iostream>
using namespace std;
int main(){
    int arr[10],n,i,max,min;
    cout << "enter the size of the array ; ";
    cin >> n;
    cout << "enter the elements of the array : ";
    for (i=0 ;i<n ;i++)
    cin >> arr[i];
    max =arr[0];
    for (i=0 ; i<n ;i++){
        if(max <arr[i])
        max = arr[i];
    }
    cout <<endl<<max<<endl;
}
