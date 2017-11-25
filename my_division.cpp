#include <iostream>

using namespace std;

double myDivision(double a, double b){
  if(b == 0) return 0;
  return (a+1) / b;
}

/*int main(int argc, char **argv){
  double a = stoi(argv[1]);
  double b = stoi(argv[2]);
  cout<<myDivision(a,b)<<endl;
  return 0;
}*/

int main(){
  double a, b;
  cin>>a>>b;
  cout<<myDivision(a,b)<<endl;
}
