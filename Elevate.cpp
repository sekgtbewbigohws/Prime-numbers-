#include <iostream>
using namespace std;

//Check the number if it is prime or not 
bool prime(int num){
    if (num<=1){
        return false;
    }
        for (int i = 2; i <= num; i++){
            if (num % 2 == 0 || num % 3 == 0){
            return false;
            }
        return true;
        }
        
}

//Print all the prim numbers between n and m
void range(int n , int m){
    for (int num = n+1; num < m  ; ++num){
        if (prime(num)){

        cout<<num<<" ";
    }   

    }

}
// The user enter the integers numbers
        int main(){
            int n,m;    


            cout<<"Enter the first number (n)";
            cin>>n;
            cout<<"Enter the second number (m)";
            cin>>m;

            if (n>=m)
            {
                cout<<"input error 'enter m bigger than n' ";
            }
            
            range(n,m);
            return 0;
            
        }
     
    

