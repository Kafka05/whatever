#include <iostream>
#include<array>
using namespace std;
int main(){

    // static array 
    int basic[3] ={1,2,3};
    cout<<"Element at second index-->"<<basic[2]<<endl;


    // stl array
    // same as the static array
    // array index out of bounds can be solved

    array<int,4> a = {1,2,3,4};
    int size= a.size();
    for( int i=0;i<size;i++){

        cout<<a[i]<<endl;

    }
    
    // a specific index acess
    cout<<"Element at second index-->"<<a.at(2)<<endl;
    //empty or not 
    cout<<"Empty or not-->"<<a.empty()<<endl;
    // firt element 
    cout<<"Element at first-->"<<a.front()<<endl;
    //last element 
    cout<<"Element at last -->"<<a.back()<<endl;


}