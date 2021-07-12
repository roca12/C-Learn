#include <iostream>

using namespace std;

template<typename T> T maxi(T a,T b){

    if (a>b){
        return a;
    }else
        return b;
}

int main() {
    cout<< maxi<int>(3,4)<<endl;
    cout<< maxi<long>(3333333,4)<<endl;
    cout<< maxi<float>(3.5,4.5)<<endl;
    cout<< maxi<double>(355.55,455.55)<<endl;
}
