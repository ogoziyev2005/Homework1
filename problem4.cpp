#include <iostream>
using namespace std;
int main(){
    const int computers=50;
    int N, LastGroup, Available_Computers;
    cin>>N;
    LastGroup=N%computers;
    Available_Computers=computers-LastGroup;
    cout<<Available_Computers<<endl;
    return 0;
}