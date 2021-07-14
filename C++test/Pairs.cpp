#include <iostream>
#include <utility>

using namespace std;
int main() {
    //inicializaciónes
    pair<int,int>p1;
    pair<int,int>p2(4,5);
    pair<int,int>p3=p1;
    pair<int,int>p4= make_pair(7,8);

    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    cout<<p4.first<<" "<<p4.second<<endl;

    //array de pares
    pair<int,int>p5[4];

    for (int i = 0; i < 4; ++i) {
        cout<<p5[i].first<<" "<<p5[i].second<<endl;
    }

    //operadores con pairs
    if(p1==p2){
        cout<<"si"<<endl;

    }else{
        cout<<"no"<<endl;
    }

    return 0;
}
