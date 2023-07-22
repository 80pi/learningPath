// flames progrma in js
// let firArr = prompt("first name: ").split("")
// let secArr = prompt("secind name: ").split("")
// let finalArr=[...firArr.filter(val => !secArr.includes(val)),...secArr.filter(val => !firArr.includes(val))]
// let reqArr="FLAMES".split("")
// for(let i=5;i>0;i--){
//     let rem=finalArr.length % i -1
//     const pos=reqArr.splice(rem,1)
// }
// console.log(reqArr)
const prompt = require("prompt-sync")();
// -------------------------------------
//  print star in nxn matrix
// method 1
// var number = prompt("enter number ");
// for (let i = 0; i < number; i++) {
//   let pattern = "";
//   for (let j = 0; j < number; j++) {
//     pattern += "*";
//   }
//   console.log(pattern);
// }
// method 2
// for (let i = 0; i < number; i++) {
//   console.log("*".repeat(number));
// }
// output
// ****
// ****
// ****
// ****

// ---------------
// print nxn matrix with numbers
// var number = prompt("enter number ");
// for (let i = 1; i <= number; i++) {
//   let str = "";
//   for (let j = 0; j < number; j++) {
//     str += i;
//   }
//   console.log(str);
// }
// method 2
// for (let i = 1; i <= number; i++) {
//   console.log(i.toString().repeat(number));
// }
// output
// 1111
// 2222
// 3333
// 4444
// ----------------------------
// print nxn matrix with all n start from 1 to n in nxn
// var number = prompt("enter number ");
// for (let i = 0; i < number; i++) {
//   let str = "";
//   for (let j = 1; j <= number; j++) {
//     str += j;
//     str += " ";
//   }
//   console.log(str);
// }

// output
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7
// --------------------------------
// print nxn matrix with continuos number
// var n = prompt("enter n");
// let cc = 1;
// for (let i = 0; i < n; i++) {
//   str = "";
//   for (let j = 0; j < n; j++) {
//     str += cc + " ";
//     cc++;
//   }
//   console.log(str);
// }

// output
// enter n4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// --------------------------------
// print right angle triangle with stars
// method 1
// var num = prompt("n ");
// for (let i = 0; i < num; i++) {
//   let str = "";
//   for (let j = 0; j <= i; j++) {
//     str += "x" + " ";
//   }
//   console.log(str);
// }
// method 2
// for (let i = 1; i <= num; i++) {
//   console.log("X ".repeat(i));
// }

// // op
// n 5
// x
// x x
// x x x
// x x x x
// x x x x x
// --------------------------------
// print right angle triangle with stars number of i
// var num = prompt("n ");
// for (let i = 1; i <= num; i++) {
//   let str = "";
//   for (let j = 0; j < i; j++) {
//     str += i + " ";
//   }
//   console.log(str);
// }
// op
// n 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// --------------------------------
// print right angle triangle with continuos number
// var num = prompt("n ");
// let incnum = 1;
// for (let i = 1; i <= num; i++) {
//   let str = "";
//   for (let j = 0; j < i; j++) {
//     str += incnum + " ";
//     incnum++;
//   }
//   console.log(str);
// }
// // op
// n 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// ------------------
// print the same above but starting i need to row number then incremant with out using temp
// with temp another method
// var num = prompt("n ");
// for (let i = 1; i <= num; i++) {
//   let str = "";
//   for (let j = 0; j < i; j++) {
//     str += i + j + " ";
//   }
//   console.log(str);
// }
// /op
// 5
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
// -------------------------
// printing in reverse order in row from i to1 end
// var num = prompt("n ");
// for (let i = 1; i <= num; i++) {
//   let str = "";
//   for (let j = i; j > 0; j--) {
//     str += j + " ";
//   }
//   console.log(str);
// }
// op
// n 4
// 1
// 2 1
// 3 2 1
// 4 3 2 1
//------------------------------
// print alpha with nxn in which column need to increase
// var num = prompt("n ");
// let alp = 65;
// method 1
// for (let i = 1; i <= num; i++) {
//   let str = "";
//   for (let j = 0; j < num; j++) {
//     str += String.fromCharCode(alp) + " ";
//   }
//   console.log(str);
//   alp++;
// }
// method 2
// for (let i = 0; i < num; i++) {
//   console.log((String.fromCharCode(alp) + " ").repeat(num));
//   alp++;
// }
// op
// n 3
// A A A
// B B B
// C C C
// ----------------------------
// print sequence of abc in nxn matrix
// var num = prompt("enter num: ");
// for (let i = 1; i <= num; i++) {
//   let alp = 65;
//   let str = "";
//   for (let j = 0; j < num; j++) {
//     str += String.fromCharCode(alp) + " ";
//     alp++;
//   }
//   console.log(str);
// }
// op
// enter num: 3
// A B C
// A B C
// A B C
// --------------------------
// print sequence in nxn mztrix
// var num = prompt("enter num: ");
// let alp = 65;
// for (let i = 1; i <= num; i++) {
//   let str = "";
//   for (let j = 0; j < num; j++) {
//     str += String.fromCharCode(alp) + " ";
//     alp++;
//   }
//   console.log(str);
// }
// op
// enter num: 3
// A B C
// D E F
// G H I
// ---------------------
// print sequence but it need to start from next alp on next line
// var num = prompt("enter num: ");
// let alp = 65;
// for (let i = 0; i < num; i++) {
//   let str = "";
//   let nextAlp = alp + i;
//   for (let j = 0; j < num; j++) {
//     str += String.fromCharCode(nextAlp) + " ";
//     nextAlp++;
//   }
//   console.log(str);
// }
// // op
// enter num: 3
// A B C
// B C D
// C D E
// ---------------------
// right angle tri with alpha in next order
// var num = prompt("enter num: ");
// let alp = 65;
// for (let i = 0; i < num; i++) {
//   let str = "";
//   for (let j = 0; j <= i; j++) {
//     str += String.fromCharCode(alp) + " ";
//   }
//   alp++;
//   console.log(str);
// }
// enter num: 3
// A
// B B
// C C C
// ---------------------
// same right angle tri but in increasing order
// var num = prompt("enter num: ");
// let alp = 65;
// for (let i = 0; i < num; i++) {
//   let str = "";
//   for (let j = 0; j <= i; j++) {
//     str += String.fromCharCode(alp) + " ";
//     alp++;
//   }
//   console.log(str);
// }
// op
// enter num: 4
// A
// B C
// D E F
// G H I J
// ---------------------
// print sequence but it need to start from next alp on next line in right ang tri
// var num = prompt("enter num: ");
// let alp = 65;
// for (let i = 0; i < num; i++) {
//   let str = "";
//   let nextAlp = alp + i;
//   for (let j = 0; j <= i; j++) {
//     str += String.fromCharCode(nextAlp) + " ";
//     nextAlp++;
//   }
//   console.log(str);
// }
// op
// enter num: 4
// A
// B C
// C D E
// D E F G
// ---------------------
// print sequence but it need to start from next alp on next line in right ang tri but in reverse order
// var num = prompt("enter num: ");
// let alp = 64 + parseInt(num);
// for (let i = 0; i < num; i++) {
//   let str = "";
//   let nextAlp = alp - i;
//   for (let j = 0; j <= i; j++) {
//     str += String.fromCharCode(nextAlp) + " ";
//     nextAlp++;
//   }
//   console.log(str);
// }
// op
// enter num: 4
// D
// C D
// B C D
// A B C D
// ---------------------
// star pattern for right side to left increasing
// var n = prompt("n: ");
// for (let i = n - 1; i >= 0; i--) {
//   console.log(" ".repeat(i) + "*".repeat(n - i));
// }
// op
// n: 4
//    *
//   **
//  ***
// ****
// ---------------------
// star pattern for right side to left increasing in opp dir
// var n = prompt("n: ");
// for (let i = n; i > 0; i--) {
//   console.log("*".repeat(i) + " ".repeat(n - i));
// }
// op/
// n: 4
// ****
// ***
// **
// *
// ---------------------
// star pattern for right side to left increasing in other direction in -
// var n = prompt("n: ");
// for (let i = n; i > 0; i--) {
//   console.log("-".repeat(n - i) + "*".repeat(i));
// }
// op/
// ****
// -***
// --**
// ---*
// ---------------------
// tri with number in row as number with n as
// var n = prompt("n: ");
// for (let i = 0; i < n; i++) {
//   console.log(" ".repeat(i) + (i + 1).toString().repeat(n - i));
// }
// o/p
// n: 4
// 1111
//  222
//   33
//    4
// ---------------------
// pattern 3
// var n = prompt("n: ");
// for (let i = 0; i < n; i++) {
//   console.log(" ".repeat(n - i) + (i + 1).toString().repeat(i + 1));
// }
// o/p
// n: 4
//     1
//    22
//   333
//  4444
// ---------------------
// pattern 4 numb in increase order for each row
// var n = prompt("n: ");
// let p = 1;
// for (let i = 0; i < n; i++) {
//   let str = "";
//   let p1 = p;
//   for (let j = 0; j < n; j++) {
//     if (j >= i) {
//       str += p1;
//       p1++;
//     } else {
//       str += " ";
//     }
//   }
//   console.log(str);
//   p++;
// }
// o/p
// n: 4
// 1234
//  234
//   34
//    4
// ---------------------
// pattern of 123 in triange
// var n = prompt("n: ");
// for (let i = n - 1; i >= 0; i--) {
//   let p = 1;
//   let str = "";
//   for (let j = 0; j < n; j++) {
//     if (j >= i) {
//       str += p;
//       p++;
//     } else {
//       str += " ";
//     }
//   }
//   if (i <= n - 2) {
//     let s = n - i - 1;
//     for (let k = 0; k < n; k++) {
//       if (k >= i + 1) {
//         str += s;
//         s--;
//       }
//     }
//   }
//   console.log(str);
// }
// n: 4
//    1
//   121
//  12321
// 1234321
// ---------------------
// pattern with a box club of num and stars
// let turn = 0;
// var n = prompt("n: ");
// for (let i = n - 1; i >= 0; i--) {
//   let str = "";
//   // 1st right andlge tri
//   for (let j = 1; j <= i + 1; j++) {
//     str += j;
//   }
//   // middle stars pattern
//   if (i <= n - 2) {
//     turn = turn + 2;
//     for (let j = 0; j < turn; j++) {
//       str += "*";
//     }
//   }
//   // last tri
//   for (let k = i + 1; k > 0; k--) {
//     str += k;
//   }
//   console.log(str);
// }
// n: 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
// ---------------------
