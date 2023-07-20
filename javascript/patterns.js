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
// var number = prompt("enter number ");
// for (let i = 0; i < number; i++) {
//   let pattern = "";
//   for (let j = 0; j < number; j++) {
//     pattern += "*";
//   }
//   console.log(pattern);
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
// var num = prompt("n ");
// for (let i = 0; i < num; i++) {
//   let str = "";
//   for (let j = 0; j <= i; j++) {
//     str += "x" + " ";
//   }
//   console.log(str);
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
// for (let i = 1; i <= num; i++) {
//   let str = "";
//   for (let j = 0; j < num; j++) {
//     str += String.fromCharCode(alp) + " ";
//   }
//   console.log(str);
//   alp++;
// }
// op
// n 3
// A A A
// B B B
// C C C
