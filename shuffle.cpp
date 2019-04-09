#include <bits/stdc++.h> 
using namespace std; 
  
int randomfunc(int j) 
{ 
    return rand() % j; 
} 
  
int main() 
{ 
    srand(unsigned(time(0))); 
    vector<int> arr; 
   
    for(int i=0,k=9;i<6;++i)
    {
    	for (int j = 0; j < 4; ++j) 
  		{
  			arr.push_back(k);	
  		}
  		k++;
	}
    // using built-in random generator 
    random_shuffle(arr.begin(), arr.end()); 
  
    // using randomfunc 
    random_shuffle(arr.begin(), arr.end(), randomfunc); 
  
    // print out content: 
    cout << "arr contains:"; 
    for (vector<int>::iterator i = arr.begin(); i != arr.end(); ++i) 
        cout << ' ' << *i; 
  
    cout << endl; 

    return 0; 
} 
