#include <iostream>
using namespace std;

int main()
{

    // prime code
    // int n,i=2,prime=0;
    // cin >> n;
    // while(i<n){
    //     if(n%i==0){
    //         cout<<"not prime";
    //         prime=1;
    //         break;
    //     }
    //     i++;
    // }
    // if(prime==0){
    // cout<<"given num is prime";
    // }
    
// -------------------------------------
    // star pattern of stars in which it a nxn matrix
    // int n,i=0;
    // cin >> n;
    // while(i<n){
    //     int j=0;
    //     while(j<n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<"\n";
    //     i++;
    // }

    // output
    // *****
    // *****
    // *****
    // *****
    // *****
//    
// ------------------------------------
    
    // pattern-2 111\n222\n333 based on n numbers
    // int n,i=1;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<i;
    //         j++;    
    //     }
    //     i++;
    //     cout << "\n";
    // }
//    output
// 8
// 11111111
// 22222222
// 33333333
// 44444444
// 55555555
// 66666666
// 77777777
// 88888888
// ---------------------------------------------------
// print nxn matrix with all n start from 1 to n in nxn
// int n;
// cout<<"enter n value ";
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<j<<" ";
//     }
//     cout << "\n";
// }

// output
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// ?--------------------------
// print nxn matrix with continuos number
// int n,p=1;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<p<<" ";
//         p++;
//     }
//     cout<<"\n";
// }
// output
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// --------------------------------
// print right angle triangle with stars
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<"x"<<" ";
//     }
//     cout<<"\n";
// }
// o/p
// 4
// x
// x x
// x x x
// x x x x
// --------------------------------
// print right angle triangle with number of ixj
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=0;j<i;j++){
//         cout<<i<<" ";
//     }
//     cout<<"\n";
// }
//  op
// 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// --------------------------------
// print right angle triangle with continuos number
// int n,p=1;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=0;j<i;j++){
//         cout<<p<<" ";
//         p++;
//     }
//     cout<<"\n";
// }
// op
// 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// ----------------------
// print the same above but starting i need to row number then incremant
// method 01
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     int temp=i;
//     for(int j=0;j<i;j++){
//         cout<<temp<<" ";
//         temp++;
//     }
//     cout<<"\n";
// }

// method 02 with out temp variable
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=0;j<i;j++){
//         cout<<j+i<<" ";
//     }
//     cout<<"\n";
// }
//op
// 5
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
// -------------------------
// printing in reverse order in row from i to1 end
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=i;j>0;j--){
//         cout<<j<<" ";
//     }
//     cout<<"\n";
// }
// op
// 5
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

// --------------------------
// print alpha with nxn in which column need to increase
// int n,alp=65;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<char(alp)<<" ";
//     }
//     alp++;
//     cout<<"\n";
// }
// //op
// 3
// A A A
// B B B
// C C C

}
