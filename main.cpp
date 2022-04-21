#include <iostream>
using namespace std;
double recursion(double result);
double recursion();
int main() {

    cout<<"Please enter n. If you want quit enter 0"<<endl;
    double n;
    cin >> n;
    cout<<recursion(n)<<endl;

    cout<<recursion()<< endl;




}
double recursion(double result){
    if(result==0){
        return 1;
    }
    else{
        return recursion(result-1) * ((result - 3) / (result*result));
    }

}
double recursion(){
    cout<<"Please enter n. If you want quit enter 0"<<endl;
    double n;
    cin >> n;
    if(n==0){
        return 1;
    }
    else{
        return recursion(n-1) * ((n - 3) / (n*n));
    }
}
