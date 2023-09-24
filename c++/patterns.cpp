#include <iostream>
using namespace std;

// function in cpp cdoe help practise
// areaof circle
float calculateAreaOfCirecle(float radius)
{
    float pi = 3.14;
    float area = pi * radius * radius;
    return area;
}
bool methodOneEvenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool methodTwoEvenOrOddBitwise(int n)
{
    if ((n & 1) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
bool primeOrNot(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
float contKiloToMile(float n)
{
    return n * 0.621371;
}

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
    // ----   output
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
    // op
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
    // numeric palindrom equilatoral pyramid
    // int n;
    // cin >> n;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     int p = 1;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (j >= i)
    //         {
    //             cout << p << " ";
    //             p++;
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     if (i <= n - 2)
    //     {
    //         int s = n - i - 1;
    //         for (int k = 0; k < n; k++)
    //         {
    //             if (k >= i + 1)
    //             {
    //                 cout << s << " ";
    //                 s--;
    //             }
    //         }
    //     }
    //     cout << "\n";
    // }
    // ----op---------------
    //     5
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1
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
    // ---op/-----------
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
    // video 09 arrays some problems
    // finding min and max
    // #include <iostream>
    // #include <climits>
    // using namespace std;
    // int main()
    // {
    //     int n,min=INT_MAX,max=INT_MIN;
    //     cin>>n;
    //     int a[n];
    //     for(int i=0;i<n;i++){
    //         cin>>a[i];
    //     }
    //     for(int i=0;i<n;i++){
    //         // max number
    //         if(a[i]>max){
    //             max=a[i];
    //         }
    //         if(a[i]<min){
    //             min=a[i];
    //         }
    //     }
    //     cout<<"max num "<<max<<endl;
    //     cout<<"min num "<<min<<endl;
    //     return 0;
    // }
    // -------------------------------------------
    // sum of element
    // #include <iostream>
    // using namespace std;
    // int main()
    // {
    //     int n,sum=0;
    //     cin>>n;
    //     int a[n];
    //     for(int i=0;i<n;i++){
    //         cin>>a[i];
    //         sum+=a[i];
    //     }
    //     cout<<"sum is "<<sum<<endl;
    //     return 0;
    // }
    // -------------------------------------------
    // reverse of a array
    //  method:01
    // #include <iostream>
    // using namespace std;
    // int main()
    // {
    //     int n;
    //     cin>>n;
    //     int a[n];
    //     for(int i=0;i<n;i++){
    //         cin>>a[i];
    //     }
    //     // reverse the array
    //     int start=0;
    //     // int len=(sizeof(a)/sizeof(a[0])); // this will tells us the length
    //     // or below both works for the same finding length of the array
    //     int len = *(&a + 1) - a;
    //     int arrLimit=len/2;
    //     int end=len-1; // for getting the last variable position
    //     for(int i=0;i<arrLimit;i++){
    //         int temp=a[start];
    //         a[start]=a[end];
    //         a[end]=temp;
    //         start++;
    //         end--;
    //     }
    //     for(int i=0;i<n;i++){
    //         cout<<a[i]<<" ";
    //     }
    //     return 0;
    // }
    // method 02
    // #include <iostream>
    // using namespace std;
    // int main()
    // {
    //     int n;
    //     cin>>n;
    //     int a[n];
    //     for(int i=0;i<n;i++){
    //         cin>>a[i];
    //     }
    //     // reverse the array
    //     int start=0;
    //     // int len=(sizeof(a)/sizeof(a[0])); // this will tells us the length
    //     // or below both works for the same
    //     int len = *(&a + 1) - a;
    //     int b[len];
    //     for(int i=0,j=len-1;i<len&j>=0;i++,j--){
    //         b[i]=a[j];
    //     }
    //     for(int i=0;i<n;i++){
    //         cout<<b[i]<<" ";
    //     }
    //     return 0;
    // }
    // ------------------------------
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
    // -------------------------------
    // hollo sqaure
    // int n=0;
    //     cin>>n;
    //     for(int i=0;i<n;i++){
    //        for(int j=0;j<n;j++){
    //             if(i==0 || i==n-1||j==0||j==n-1){
    //             cout<<'x';
    //     } else{
    //         cout<<" ";
    //     }
    //         }
    //         cout<<endl;
    //     }
    //----output----
    // n=4
    // xxxx
    // x  x
    // x  x
    // xxxx
    // ------------------------------
    // inveted hollow square
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == 0 || j == 0 || i + j == n - 1)
    //         {
    //             cout << "X ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // --------o/p0----------
    //     6
    // X X X X X X
    // X       X
    // X     X
    // X   X
    // X X
    // X
    // --------------------
    // hollow full pyramid
    //     int n;
    //     cin>>n;
    //     int col=(2*n)-1;
    //     int mid=col/2;
    //     int lineStar=1;
    //     for(int i=0;i<n;i++){
    //         int star=lineStar;
    //         for(int j=0;j<col;j++){
    //             if(i+j>=mid&& star>0){
    //                 cout<<"x";
    //                 star--;
    //             }else{
    //                 cout<<" ";
    //             }
    //         }
    //         // mid=mid-1;
    //         lineStar=lineStar+2;
    //         cout<<endl;
    //     }
    //     ------------po---------------
    //     6
    //      x
    //     xxx
    //    xxxxx
    //   xxxxxxx
    //  xxxxxxxxx
    // xxxxxxxxxxx
    //-----------------------------------
    // hollow yramid
    // int n;
    //     cin>>n;
    //     int col=(2*n)-1;
    //     int mid=col/2;
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<col;j++){
    //             if((i+j>=mid && (j==mid-i||j==mid+i))||i==n-1){
    //                 cout<<'X';
    //             }else{
    //                 cout<<" ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    //     -------------------op--------------
    //     6
    //      X
    //     X X
    //    X   X
    //   X     X
    //  X       X
    // XXXXXXXXXXX
    // ------------------
    // pyramid of ixj with space
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i=i+1){
    //     for(int j=0;j<(n-i-1);j=j+1){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j=j+1){
    //         cout<<"x ";
    //     }
    //     cout<<endl;
    // }
    // ----------op------------
    // 5
    //     x
    //    x x
    //   x x x
    //  x x x x
    // x x x x x
    // ------------------------------
    // invert of above pyramid
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i=i+1){
    //     for(int j=0;j<i;j=j+1){
    //         cout<<" ";
    //     }
    //     for(int j=n-i;j>0;j=j-1){
    //         cout<<"x ";
    //     }
    //     cout<<endl;
    // }
    // -------o/p-----------
    // 5
    //  x x x x x
    //   x x x x
    //    x x x
    //     x x
    //      x
    //-----------------------------
    // mix for both two pyr
    // int num;
    // cin>>num;
    // int n=num/2;
    // for(int i=0;i<n;i=i+1){
    //     for(int j=0;j<(n-i-1);j=j+1){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j=j+1){
    //         cout<<"x ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i=i+1){
    //     for(int j=0;j<i;j=j+1){
    //         cout<<" ";
    //     }
    //     for(int j=n-i;j>0;j=j-1){
    //         cout<<"x ";
    //     }
    //     cout<<endl;
    //     }
    // ----------op---------
    // 6
    //   x
    //  x x
    // x x x
    // x x x
    //  x x
    //   x
    // ------------------------
    // only boaders pyramin
    // hollow pyramind with boaders only
    //     int n;
    //     cin >> n;
    //     for (int row = 0; row < n; row = row + 1)
    //     {
    //         for (int col = 0; col < n - row - 1; col = col + 1)
    //         {
    //             cout << " "; // but her its asingle spce
    //         }
    //         for (int col = 0; col < row + 1; col = col + 1)
    //         {
    //             if (col == 0 || col == row + 1 - 1)
    //             {
    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << "  "; // here it is not a single space ita double space
    //             }
    //         }
    //         cout << endl;
    //     }
    //     -------------op-------------
    //     6
    //      *
    //     * *
    //    *   *
    //   *     *
    //  *       *
    // *         *
    // ------------------------------
    // for the reverse hollow one of above
    // for the below code is differ form the above to above code
    //     int n;
    //     cin >> n;
    //     for (int i = 0; i < n; i = i + 1)
    //     {
    //         for (int j = 0; j < i; j = j + 1)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = 0; j < n - i; j = j + 1)
    //         {
    //             if (j == 0 || j == n - i - 1)
    //                 cout << "x ";
    //             else
    //                 cout << "  ";
    //         }
    //         cout << endl;
    //     }
    //     ---------------------op------------
    //     6
    // x         x
    //  x       x
    //   x     x
    //    x   x
    //     x x
    //      x
    // ---------------------------------
    // clubbin both 2
    //     int num;
    //     cin >> num;
    //     int n = num / 2;
    //     for (int row = 0; row < n; row = row + 1)
    //     {
    //         for (int col = 0; col < n - row - 1; col = col + 1)
    //         {
    //             cout << " "; // but her its asingle spce
    //         }
    //         for (int col = 0; col < row + 1; col = col + 1)
    //         {
    //             if (col == 0 || col == row + 1 - 1)
    //             {
    //                 cout << "x ";
    //             }
    //             else
    //             {
    //                 cout << "  "; // here it is not a single space ita double space
    //             }
    //         }
    //         cout << endl;
    //     }
    //     for (int i = 0; i < n; i = i + 1)
    //     {
    //         for (int j = 0; j < i; j = j + 1)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = 0; j < n - i; j = j + 1)
    //         {
    //             if (j == 0 || j == n - i - 1)
    //                 cout << "x ";
    //             else
    //                 cout << "  ";
    //         }
    //         cout << endl;
    //     }
    //     //////op----------
    //     6
    //   x
    //  x x
    // x   x
    // x   x
    //  x x
    //   x
    // --------------------------------
    // all sourounded by star but middle big rhombus with spaces with space
    // after each x and space
    // int num;
    // cin >> num;
    // int n = num / 2;
    // // for the upper part
    // for (int i = 0; i < n; i++)
    // {
    //     // for left upper part
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << "x ";
    //     }
    //     // for spacing in between
    //     for (int k = 0; k < (2 * (i + 1) - 1); k++)
    //     {
    //         cout << "  ";
    //     }
    //     // for right upper part
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << "x ";
    //     }
    //     cout << endl;
    // }
    // // for the lower part
    // for (int i = 0; i < n; i++)
    // {
    //     // for left down part
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "x ";
    //     }
    //     // for spcace
    //     for (int j = 0; j < 2 * (n - i) - 1; j++)
    //     {
    //         cout << "  "; // here it a double space not a single
    //     }
    //     // for the right down triangle
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "x ";
    //     }
    //     cout << endl;
    // }
    // -- -- -- -- -- -- -- -op-- -- -- -- -
    // 6
    // x x x   x x x
    // x x       x x
    // x           x
    // x           x
    // x x       x x
    // x x x   x x x
    // -----------------------
    // custom -1
    //     int n;
    //     cin >> n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < 2 * (i + 1) - 1; j++) // or we can use 2*i+1
    //         {
    //             if (j % 2 == 0)
    //             {
    //                 cout << i + 1;
    //             }
    //             else
    //             {
    //                 cout << "*";
    //             }
    //         }
    //         cout << endl;
    //     }
    //     //------------op--------------
    //     4
    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    // -----------------------
    // custom -2 to add tje other half below
    //     int n;
    //     cin >> n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < 2 * (i + 1) - 1; j++) // or we can use 2*i+1
    //         {
    //             if (j % 2 == 0)
    //             {
    //                 cout << i + 1;
    //             }
    //             else
    //             {
    //                 cout << "*";
    //             }
    //         }
    //         cout << endl;
    //     }
    //     int secondLayer = n - 1;
    //     for (int i = 0; i < secondLayer; i++)
    //     {
    //         for (int j = 0; j < 2 * (secondLayer - i) - 1; j++)
    //         {
    //             if (j % 2 == 0)
    //             {
    //                 cout << secondLayer - i;
    //             }
    //             else
    //             {
    //                 cout << "*";
    //             }
    //         }
    //         cout << endl;
    //     }
    //     ///////op-------------
    //     4
    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    // 3*3*3
    // 2*2
    // 1
    // -----------------------
    // custom -3
    //     int n;
    //     cin >> n;
    //     cout << "1" << endl;
    //     for (int i = 0; i < n - 1; i++)
    //     {
    //         for (int k = 0; k <= i; k++)
    //         {
    //             if (k == 0)
    //             {
    //                 cout << '1';
    //             }
    //             cout << "_";
    //         }
    //         cout << i + 2;
    //         cout << endl;
    //     }
    //     for (int i = 0; i <= n; i++)
    //     {
    //         cout << i + 1;
    //     }
    //     // /----------op
    //     4
    // 1
    // 1_2
    // 1__3
    // 1___4
    // 12345
    // ----------------------------
    // custom- 4
    //     int n;
    //     cin >> n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         char c = 'A';
    //         for (int j = 0; j < 2 * (i + 1) - 1; j++)
    //         {
    //             cout << c << " ";
    //             if (j >= i)
    //             {
    //                 c--;
    //             }
    //             else
    //             {
    //                 c++;
    //             }
    //         }
    //         cout << endl;
    //     }
    //     //-------op---------
    //     5
    // A
    // A B A
    // A B C B A
    // A B C D C B A
    // A B C D E D C B A
    // ----------------------------
    // custom- 5
    //     int n;
    //     cin >> n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             if (i == 0)
    //             {
    //                 cout << j + 1 << " ";
    //             }
    //             else if (j == 0)
    //             {
    //                 cout << i + 1 << " ";
    //             }
    //             else if (j == n - i - 1)
    //             {
    //                 cout << n;
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //         cout << endl;
    //     }
    //     //--------op---
    //     5
    // 1 2 3 4 5
    // 2     5
    // 3   5
    // 4 5
    // 5
    // ----------------------------
    // custom- 6
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2 * n - i - 2; j++)
    //     {
    //         cout << "x ";
    //     }
    //     for (int j = 0; j < 2 * (i + 1) - 1; j++) // or we can use 2*i+1
    //     {
    //         if (j % 2 == 0)
    //         {
    //             cout << i + 1 << " ";
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     for (int j = 0; j < 2 * n - i - 2; j++)
    //     {
    //         cout << "x ";
    //     }
    //     cout << endl;
    // }
    // -------op------------
    //     5
    // x x x x x x x x 1 x x x x x x x x
    // x x x x x x x 2 * 2 x x x x x x x
    // x x x x x x 3 * 3 * 3 x x x x x x
    // x x x x x 4 * 4 * 4 * 4 x x x x x
    // x x x x 5 * 5 * 5 * 5 * 5 x x x x
    // ----------------------------
    // custom- 6
    // solid half diamond
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "x ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = n - 1; j > i; j--)
    //     {
    //         cout << "x ";
    //     }
    //     cout << endl;
    // }
    // -------op---------
    //     5
    // x
    // x x
    // x x x
    // x x x x
    // x x x x x
    // x x x x
    // x x x
    // x x
    // x
    // ----------------------------
    // custom- 6
    // floid trinagle
    // int n, cc = 1;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << cc << " ";
    //         cc++;
    //     }
    //     cout << endl;
    // }
    //--------op-----
    //     6
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 21
    // ----------------------------
    // custom- 6
    // butterfly paattern
    //     int num;
    //     cin >> num;
    //     int n = num / 2;
    //     int start = 0, end = n * 2 - 1;
    //     // upper oart of butterfly
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < 2 * n; j++)
    //         {
    //             if (j <= start || j >= end)
    //             {
    //                 cout << "x ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //         start++;
    //         end--;
    //         cout << endl;
    //     }
    //     // lower oart of butter fly
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < 2 * n; j++)
    //         {
    //             if (j <= end || j >= start)
    //             {
    //                 cout << "x ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //         start++;
    //         end--;
    //         cout << endl;
    //     }
    //     //--------op-------
    // //     8
    // // x             x
    // // x x         x x
    // // x x x     x x x
    // // x x x x x x x x
    // // x x x x x x x x
    // // x x x     x x x
    // // x x         x x
    // // x             x
    // ----------------------------
    // Fancy 01
    //     int n;
    //     cin >> n;
    //     int col = 17; // based on home work explination taken it as fix bzc 9 will make full triangle
    //     int mid = col / 2;
    //     int starCount = 1;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 0; j < col; j++)
    //         {
    //             if (j >= mid && starCount > 0)
    //             {
    //                 if (starCount % 2 == 0)
    //                 {
    //                     cout << "* ";
    //                 }
    //                 else
    //                 {
    //                     cout << i << " ";
    //                 }
    //                 starCount--;
    //             }
    //             else
    //             {
    //                 cout << "* ";
    //             }
    //         }
    //         starCount = 2 * (i) + 1;
    //         mid--;
    //         cout << endl;
    //     }
    //     // --------op--------
    //     9
    // * * * * * * * * 1 * * * * * * * *
    // * * * * * * * 2 * 2 * * * * * * *
    // * * * * * * 3 * 3 * 3 * * * * * *
    // * * * * * 4 * 4 * 4 * 4 * * * * *
    // * * * * 5 * 5 * 5 * 5 * 5 * * * *
    // * * * 6 * 6 * 6 * 6 * 6 * 6 * * *
    // * * 7 * 7 * 7 * 7 * 7 * 7 * 7 * *
    // * 8 * 8 * 8 * 8 * 8 * 8 * 8 * 8 *
    // 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9
    // ----------------------------
    // Fancy 02
    // numerival hallow half pyramid
    //     int n;
    //     cin >> n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j <= i; j++)
    //         {
    //             if (j == 0 || j == i || i == n - 1)
    //             {
    //                 cout << j + 1;
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //         }
    //         cout << endl;
    //     }
    //     // --op--
    //     5
    // 1
    // 12
    // 1 3
    // 1  4
    // 12345
    // ----------------------------
    // Fancy 02
    //     int n;
    //     cin >> n;
    //     int val = 1;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < (2 * (i + 1) - 1); j++)
    //         {
    //             if (j % 2 == 0)
    //             {
    //                 cout << val;
    //                 val++;
    //             }
    //             else
    //             {
    //                 cout << "*";
    //             }
    //         }
    //         cout << endl;
    //     }
    //     int start = val - n;
    //     for (int i = n; i > 0; i--)
    //     {
    //         int k = start;
    //         for (int j = 0; j < (2 * i - 1); j++)
    //         {
    //             if (j % 2 == 0)
    //             {
    //                 cout << k;
    //                 k++;
    //             }
    //             else
    //             {
    //                 cout << "*";
    //             }
    //         }
    //         start = start - i + 1;
    //         cout << endl;
    //     }
    //     // -----op------
    //     4
    // 1
    // 2*3
    // 4*5*6
    // 7*8*9*10
    // 7*8*9*10
    // 4*5*6
    // 2*3
    // 1
    // ---------------
    // fancy 3
    // int num;
    // cin >> num;
    // int upper = num % 2 == 0 ? num / 2 : num / 2 + 1;
    // int lower = num - upper;
    // for (int i = 0; i < upper; i++)
    // {
    //     int val = 1;
    //     int colMid = ((2 * i - 1) / 2) + 1;
    //     for (int j = 0; j < (2 * (i + 1) - 1); j++)
    //     {
    //         if (j == 0 || j == (2 * (i + 1) - 2))
    //         {
    //             cout << "*";
    //         }
    //         else if (j <= colMid)
    //         {
    //             if (j == colMid)
    //             {
    //                 cout << val;
    //             }
    //             else
    //             {
    //                 cout << val;
    //                 val++;
    //             }
    //         }
    //         else if (j > colMid)
    //         {
    //             --val;
    //             cout << val;
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int i = lower; i > 0; i--)
    // {
    //     int val = 1;
    //     int lowercolMid = ((2 * i - 1) / 2) + 1;
    //     for (int j = (2 * (i)-1); j > 0; j--)
    //     {
    //         if (j == 1 || j == (2 * (i)-1))
    //         {
    //             cout << "*";
    //         }
    //         else if (j >= lowercolMid)
    //         {
    //             if (j == lowercolMid)
    //             {
    //                 cout << val;
    //             }
    //             else
    //             {
    //                 cout << val;
    //                 val++;
    //             }
    //         }
    //         else if (j < lowercolMid)
    //         {
    //             --val;
    //             cout << val;
    //         }
    //     }
    //     cout << endl;
    // }
    //
    //     //----------op-------
    //     9
    // *
    // *1*
    // *121*
    // *12321*
    // *1234321*
    // *12321*
    // *121*
    // *1*
    // *
    // ------------------------
    // pascals' triangel
    //     int n;
    //     cin >> n;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         int c = 1;
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << c;
    //             c = c * (i - j) / j; // formulae for the pascal triangle to get that row calues
    //         }
    //         cout << endl;
    //     }
    //     // --------op------
    //     7
    // 1
    // 11
    // 121
    // 1331
    // 14641
    // 15101051
    // 1615201561
    // -------------------------
    // facy 4
    // growth and shrink face of side number triangle
    // int num;
    // cin >> num;
    // for (int i = 0; i < num; i++)
    // {
    //     int cdt = i <= num / 2 ? 2 * i : 2 * (num - i - 1);
    //     for (int j = 0; j <= cdt; j++)
    //     {
    //         if (j <= cdt / 2)
    //         {
    //             cout << j + 1;
    //         }
    //         else
    //         {
    //             cout << cdt - j + 1;
    //         }
    //     }
    //     cout << endl;
    // }
    // op------------
    //     7
    // 1
    // 121
    // 12321
    // 1234321
    // 12321
    // 121
    // 1
    //----------
    // area of circle
    // int n;
    // cin >> n;
    // float val = calculateAreaOfCirecle(n);
    // cout << val;
    // ---------
    // even or odd
    // method one normal
    // int n;
    // cin >> n;
    // bool res = methodOneEvenOrOdd(n);
    // if (res)
    // {
    //     cout << n << " is even";
    // }
    // else
    // {
    //     cout << n << " is odd";
    // }
    // -----------------
    // even odd method 02 bit wise
    // int n;
    // cin >> n;
    // bool res = methodTwoEvenOrOddBitwise(n);
    // if (res)
    // {
    //     cout << n << " is even";
    // }
    // else
    // {
    //     cout << n << " is odd";
    // }
    // ------------------------
    // int n;
    // cin >> n;
    // factorial of a given number
    // int res = factorial(n);
    // cout << "factorial of " << n << " " << res;
    // --------------------
    // check given number
    // int n;
    // cin >> n;
    // bool prime = primeOrNot(n);
    // if (prime)
    // {
    //     cout << n << " is prime";
    // }
    // else
    // {
    //     cout << n << " is not a prime";
    // }
    // ------------------
    // find prime in given range
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     bool prime = primeOrNot(i);
    //     if (prime)
    //     {
    //         cout << i << " is prime" << endl;
    //     }
    //     else
    //     {
    //         cout << i << " is not a prime" << endl;
    //     }
    // }
    // -------------------------
    // set kth bit (to set the particular index of given decimal n of it's binary place
    // to convert 0 to 1 at print it decimal value)
    // int n;
    // cin >> n;
    // int kthBit, val = 1;
    // cin >> kthBit;
    // val = val << kthBit;
    // cout << "kth bit of given number be " << (n | val);
    // ------------
    // count all set bits (means to count no of one's in a given binary of decimal n)
    // int n;
    // cin >> n;
    // int setBitCount = 0;
    // int t = n;
    // while (t > 0)
    // {
    //     if ((t & 1) != 0)
    //         setBitCount++;
    //     t = t >> 1;
    // }
    // cout << "set bit count of " << n << " is " << setBitCount;
    // ----op----
    //     34 (100010 34 binary value and no of one's are 2 so answer is 2)
    // set bit count of 34 is 2
    // ---------------
    // create number using digits
    // int n;
    // cin >> n;
    // int digit = 0, newDigit;
    // for (int i = 0; i < n; i++)
    // { // here n means no of digits he wants to put in
    //     cin >> newDigit;
    //     digit = digit * 10 + newDigit;
    // }
    // cout << "complete digit after all values be " << digit;
    // ---op---
    //     3
    // 1
    // 2
    // 3
    // complete digit after all values be 123
    // ---------------
    // print no of digits in integer(to print indiviual digits in give input)
    // int n;
    // cin >> n;
    // while (n > 0)
    // {
    //     int rem = n % 10;
    //     cout << rem << endl;
    //     n /= 10;
    // }
    // ---op------
    //     1234
    // 4
    // 3
    // 2
    // 1
    // -----------------
    // kilometers to miles (1kilometer=0.6213371miles)
    // float n;
    // cin >> n;
    // float res = contKiloToMile(n);
    // cout << "converted values for " << n << " km to miles be " << res << " miles";
    // -----------op--------
    //     67.89 (given in km)
    // converted values for 67.89 km to miles be 42.1849 miles (ans in miles)
}
