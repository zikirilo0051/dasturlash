 #include <iostream>
 #include <stack>
using namespace std;
int main () { 
  stack <string> chamadon;
  for (int i=0; i<5; i++){
  	string narsa ;
  	cin >> narsa;
  	chamadon. push (narsa);
  	cout<< chamadon.top()<< endl;
  }
 while(chamadon.empty() != true){
 
 chamadon.pop();
 cout<< chamadon.top()<<endl;
  }
}