#include <iostream>
using namespace std;
int main(){
    int c = 0;
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        N = N/10;
        c++;
    }
    if(c==3 and N%2==0){
        cout << "OMADLI SON";
    }else{
        cout << "OMADSIZ SON";
    }
}

