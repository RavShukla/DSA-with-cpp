#include <iostream>
using namespace std;
int main(){
    int inp ;
    cout<< "enter no. which you want to search ";
    cin >> inp ;
    int arr[]={4,2,7,8,1,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool found = false;
    for(int i=0 ; i < n ;i++ ){
        if (arr[i]== inp){
            cout << "Found at index: " << i << endl;
            found = true;
            break;
        }
    }
    if(!found) {
        cout << "Not found" << endl;
    }
    return 0;
}
