#include<iostream>
#include<vector>
using namespace std;

    // how to creat vectore
    // ====================================

int main(){
    
    // vector<int> vinit;

    // vector<int> vinit={5,7,8,9,4,3};

    vector<int> vinit(5,3);

    for (int val : vinit){
       cout << val << endl; 
    }
    return 0;
}

