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
int print(int N){
   if(cnt>N)
   return N;
    cout<< cnt<<endl;
    cnt++;
    print(N);

}
int p(int N){
   if(  N<1)
   return 1;
    cout<<  N<<endl;
    
    p(N-1);

}
void backtrack(int i,int N){
    if(i<1)
    return;
    else 
    {
        backtrack(i-1,N);
        cout<<i<<endl;
    }
}

int main(){
    int N;
    cin>>N;
    backtrack(N,N);
    

}