#include<bits/stdc++.h>
using namespace std;

int main()
{       
   int input;
   cin >> input;
   vector <int> arr ={1,1};
 
   for(int i =2; i < input ; i++){
           arr.push_back( arr[i-1] + arr[i-2] );
   }
        cout << arr[input -1];
        return 0 ;
}
