#include <iostream>

using namespace std;

template<typename T>
class Par{
    T x;
    T y;
public:
    Par( T a,T b){
        x=a;
        y=b;
    }
    T getPrimero(){
         return x;
    }
    T getSegundo() {
        return y;
    }
};

template<typename T, typename V>
class ParDiferente{
    T x;
    V y;
public:
    ParDiferente( T a,T b){
        x=a;
        y=b;
    }
    T getPrimero(){
        return x;
    }
    T getSegundo() {
        return y;
    }
};

int main() {
    Par<int>par1(3,4);
    Par<int>par2(3,4);
    cout<<par1.getPrimero()<<" "<<par2.getPrimero()<<endl;
    cout<<par1.getSegundo()<<" "<<par2.getSegundo()<<endl;
    Par<float>par3(3.5,4.0);
    Par<float>par4(3.5,7.0);
    cout<<par3.getPrimero()<<" "<<par4.getPrimero()<<endl;
    cout<<par3.getSegundo()<<" "<<par4.getSegundo()<<endl;

    ParDiferente<int,int>par(3,4);
    cout<<par.getPrimero()<<" "<<par.getSegundo()<<endl;


}
