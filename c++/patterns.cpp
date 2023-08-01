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
// ----------------------------
// print sequence of abc in nxn matrix
// int n;
// cin >> n;
// for(int i=0;i<n;i++){
//     int alp=65;
//     for(int j=0;j<n;j++){
//        cout<<char(alp)<<" ";
//        alp++; 
//     }
//     cout << "\n";
// }
// op
// 3
// A B C
// A B C
// A B C
// --------------------------
// print sequence in nxn mztrix
// int n;
// cin >> n;
// int alp=65;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//        cout<<char(alp)<<" ";
//        alp++; 
//     }
//     cout << "\n";
// }
// op
// 3
// A B C
// D E F
// G H I
// ---------------------
// print sequence but it need to start from next alp on next line
// int n;
// cin >> n;
// int alp=65;
// for(int i=0;i<n;i++){
//         int nextApl=alp+i;
//     for(int j=0;j<n;j++){
//        cout<<char(nextApl)<<" ";
//        nextApl++; 
//     }
//     cout << "\n";
// }
// // op
// 3
// A B C
// B C D
// C D E
// ---------------------
// right angle tri with alpha in next order
// int n,alp=65;
// cin >> n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<char(alp)<<" ";
//     }
//     alp++;
//     cout<<"\n";
// }
// op
// 3
// A
// B B
// C C C
// ---------------------
// same right angle tri but in increasing order
// int n,alp=65;
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     for(int j=0;j<=i;j++){
//         cout<<char(alp)<<" ";
//         alp++;
//     }
//     cout<<"\n";
// }
// // op
// 4
// A
// B C
// D E F
// G H I J
// ---------------------
// print sequence but it need to start from next alp on next line in right ang tri
// int n;
// cin >> n;
// int alp=65;
// for(int i=0;i<n;i++){
//         int nextApl=alp+i;
//     for(int j=0;j<=i;j++){
//        cout<<char(nextApl)<<" ";
//        nextApl++; 
//     }
//     cout << "\n";
// }
// op
// 4
// A
// B C
// C D E
// D E F G
// ---------------------
// print sequence but it need to start from next alp on next line in right ang tri but in reverse order
// int n;
// cin >> n;
// int alp=64+n;
// for(int i=0;i<n;i++){
//         int nextApl=alp-i;
//     for(int j=0;j<=i;j++){
//        cout<<char(nextApl)<<" ";
//        nextApl++; 
//     }
//     cout << "\n";
// }
// op
// 4
// D
// C D
// B C D
// A B C D
// ---------------------
// star pattern for right side to left increasing
// int n;
// cin>>n;
// for(int i=n-1;i>=0;i--){
//     for(int j=0;j<n;j++){
//         if(j>=i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<"\n";
// }
// op/
// 4
//    *
//   **
//  ***
// ****
// ---------------------
// star pattern for right side to left increasing in opp dir
// int n;
// cin>>n;
// for(int i=n-1;i>=0;i--){
//     for(int j=0;j<n;j++){
//         if(j<=i){
//             cout<<"*";
//         }
//     }
//     cout<<"\n";
// }
// op
// 4
// ****
// ***
// **
// *
// ---------------------
// star with iphen pattern in spaces
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(j<i){
//             cout<<"-";
//         }else{
//             cout<<"*";
            
//         }
//     }
//     cout<<"\n";
// }
// op/
// 4
// ****
// -***
// --**
// ---*
// ---------------------
// tri with number in row as number with n as 
// int n,p=1;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(j>=i){
//             cout<<p;
//         }else{
//             cout<<" ";
            
//         } 
//     }
//     p++;
//     cout<<"\n";
// }
// op/
// 4
// 1111
//  222
//   33
//    4
// ---------------------------------
// left angle triangle
// int n,p=1;
// cin>>n;
// for(int i=n-1;i>=0;i--){
//     for(int j=0;j<n;j++){
//         if(j>=i){
//             cout<<p;
//         }else{
//             cout<<" ";
            
//         } 
//     }
//     p++;
//     cout<<"\n";
// }
// op/
// 4
//    1
//   22
//  333
// 4444
// -------------------
// tri in crease order and strat with next numbe r in each col
// int n,p=1;
// cin>>n;
// for(int i=0;i<n;i++){
//     int p1=p;
//     for(int j=0;j<n;j++){
//         if(j>=i){
//        cout<<p1;
//        p1++; 
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     p++;
//     cout<<"\n";
// }
// op/
// 4
// 1234
//  234
//   34
//    4
// --------------------------------------------
// pattern of 123 in triange
// int n;
// cin>>n;
// for (int i = n-1; i>=0; i--)
// {
//     int p=1;
//     for (int j = 0; j < n; j++)
//     {
//        if(j>=i){
//         cout<<p;
//         p++;
//        }else{
//         cout<<" ";
//        }
//     }
//     if(i<=n-2){
//         int s=n-i-1;
//     for(int k=0;k<n;k++){
//         if(k>=i+1){
//         cout<<s;
//         s--;
//        }
//     }
//     }
//     cout<<"\n";
    
// }
// op
// 4
//    1
//   121
//  12321
// 1234321
// ---------------------------------
// pattern with a box club of num and stars
// int n,turn=0;
// cin>>n;
// for(int i=n-1;i>=0;i--){
//     // 1st right andlge tri
//     for(int j=1;j<=i+1;j++){
//         cout<<j;
//     }
//     // middle stars pattern
//     if(i<=n-2){
//     turn=turn+2;
//     for(int j=0;j<turn;j++){
//         cout<<"*";
//     }
//     }
//     // last tri
//     for(int k=i+1;k>0;k--){
//         cout<<k;
//     }
//     cout<<"\n";

// }
// op/
// 6
// 123456654321
// 12345**54321
// 1234****4321
// 123******321
// 12********21
// 1**********1
// ---------------------
// cout<<(17>>1)<<endl; 
// cout<<(17>>2)<<endl;
// cout<<(17>>3)<<endl;
// int a=1,b=2;
// if( a-- > 0 && ++b > 2){
//    cout<<"inside";
// }else{
//    cout<<"ot";
// }
// cout<< a<<" "<<b;
// }
//----------------------------
// // simple calcuator
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=0,b=0,op=0;
//     char c;
//     cin >>a;
//     cin >> b;
//     cin >> c;
//     switch(c){
//         case '+':
//         cout<<"adding"<<endl;
//         op=a+b;
//         break;
//         case '-':
//         op=a-b;
//         break;
//         case '/':
//         op=a/b;
//         break;
//         case '%':
//         op=a%b;
//         break;
//         case '*':
//         op=a*b;
//         break;
//         default: cout<<"other option"<<endl;
//         break;
//     }
//     cout<<"ur output: "<<op<<endl;
//     return 0;
// }
// ---------------------------

// // denotes number of NOTES required for a given number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     // 2000,500,100,50,20,10
//     cout<<"enter n value";
//     cin>>n;
//     while(n>=10){
//         int op;
//         if(n>=2000){
//             op=n/2000;
//             cout<<"reg "<<op<<" 2000 note"<<endl;
//             n-=(2000*op);
//         }
//         else if(n<2000&n>=500){
//             op=n/500;
//             cout<<"reg "<<op<<" 500 note"<<endl;
//             n-=(500*op);
//         }
//         else if(n<500&n>=100){
//             op=n/100;
//             cout<<"reg "<<op<<" 100 note"<<endl;
//             n-=(100*op);
//         }
//         else if(n<100&n>=50){
//             op=n/50;
//             cout<<"reg "<<op<<" 50 note"<<endl;
//             n-=(50*op);
//         }
//         else if(n<50&n>=20){
//             op=n/20;
//             cout<<"reg "<<op<<" 20 note"<<endl;
//             n-=(20*op);
            
//         }
//         else if(n<20&n>=10){
//             op=n/10;
//             cout<<"reg "<<op<<" 10 note"<<endl;
//             n-=(10*op);
//         }
//         else{
//             cout<<"less than 0"<<endl;
//         }
            
//     }
//     return 0;
// }
// ----------------------
// // ncr code
// #include <iostream>
// using namespace std;
// int fac(int n){
//     int facAns=1;
//     for(int i=n;i>0;i--){
//         facAns*=i;
//     }
//     return facAns;
// }
// int main()
// {
//     int n,c;
//     cin>>n>>c;
//     int a=fac(n);
//     int b=fac(c)*fac(n-c);
//     int mul=a/b;
//     cout<<mul;
//     return 0;
// }
// ------------------------
// // is prime or not
// #include <iostream>

// using namespace std;
// int prime(int n){
//     int facAns=1;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int n,c;
//     cin>>n;
//     int ans=prime(n);
//     if(ans==0){
//         cout<<"not prime";
//     }
//     else{
//          cout<<"prime";
//     }
//     return 0;
// }
// --------------------
// // arithmetic progression
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,c;
//     cin>>n;
//     int ans=(3*n)+7;
//     cout<<"AP is: "<<ans;
//     return 0;
// }
// -------------------------
// // number of set bits in and b
// // no of ones in a & b
// #include <iostream>
// using namespace std;
// int setBit(int a){
//     int one=0;
//     while(a>0){
//         int s;
//         s=a&1;
//         if(s==1){
//             one++;
//         }
//         a=a>>1;
//     }
//     return one;
// }
// int main()
// {
//     int a,b,one=0;
//     cin>>a>>b;
//     int aco=setBit(a);
//     int bco=setBit(b);
//     cout<<aco+bco;
//     return 0;
// }
// -----------------------
// // fibanoci find nth term
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a=0,b=1,nthFibnoci=0;
//     cin>>n;
//     if(n==2){
//         nthFibnoci=1;
//     }else{
//       for(int i=2;i<n;i++){
//           nthFibnoci=a+b;
//           a=b;
//           b=nthFibnoci;
//     }  
//     }  
//     cout << nthFibnoci;
//     return 0;
// }
// ---------------------

