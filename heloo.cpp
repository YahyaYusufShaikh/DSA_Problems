// Header file for input output functions
#include <iostream>
using namespace std;

// main() function: where the execution of
// C++ program begins
int main() {
  
    // This statement prints "Hello World"
    cout << "Hello World"<<endl;
   int marks = 85;
   if(marks < 25){
    cout<<"Your are fail \n\n";
   }else if(marks >=25 && marks <= 44){
    cout<<"E\n\n";
   }else if(marks >= 45 && marks <= 49){
    cout << "D \n\n";
   }else if(marks >= 50 && marks <= 59){
    cout << "C \n\n";
   }else if(marks >= 60 && marks <= 79){
    cout <<"B \n\n";
   }else {
    cout << "Pass with A grade \n\n";
   }



   int week = 3;
//    cin>>week;

   switch (week)
   {
   case 1:
    cout<<"monday";
    break;

   case 2:
   cout <<"tuesday";
   break;

   default:
    cout <<"invalid";
    break;
   }
    cout<<endl;
   int l = 10;
   while (l<=10){
    cout<<"hello "<<l<<endl;
    l++;
   }
   {
    /* code */
   }
   
   int i = 4;
   do{
    cout<<"Do While Loop"<<i<<endl;
    i +=1;
   }while (i <= 6);
   


   int j = 0;
   int k = 0;
   int n = 4;

   for(j; j<2*n-1; j++){
    for(k = 0; k<2*n-1; k++){
        // if(j == 0 || k == 0 || j == 2*n-2 || k == 2*n-2){
        //     cout<<n;
        // }
        // else if(j == 1 || k ==1 || j == 2*n-3 || k == 2*n-3){
        //     cout<<n-1;
        // }
        // else{
        //     cout<<" ";
        // }
        for(int a = 0; a<n; a++){
            int i = 2;
            if(j == i || k == i || j == 2*n-i || k == 2*n-i){
                cout<<n-a;
            }
            i++;
        }
    }
    cout<<endl;
   }

    return 0;
}