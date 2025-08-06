#include<iostream>
using namespace std;
 int cnt=1;
string printN(int N){
   if(cnt>N)
   return "name";
    cout<< "name"<<endl;
    cnt++;
    printN(N);

}

int main(){
    int N;
    cin>>N;
    printN(N);
}