// // (function main() {
    
// //     const readline = require('readline')
    
    
// //     const rl = readline.createInterface({
    
    
// //     input: process.stdin,
    
// //     output: process.stdout
    

// //     });
    

    
// //     var firstUniqChar = function(s) {

// //         for(let i=0;i<s.length;i++){

// //         let before = s.slice(0, i);

// //         let after = s.slice(i+1);

        
// //         if(!before.includes (s[i]) && !after.includes (s[i])
        
// //         }
  
        
// //         return -1;
// //     };
    
// //     rl.on('line', (input) => {

// //     console.log(firstUniqChar(input));
    
// //     });
        
// //     }());


// // 1. INTEGER_ARRAY call_id
// // 2. INTEGER n, denoting number of soldiers
// // The function is expected to return an INTEGER_ARRAY.

// function collectingStones(call_id, n) {
//     let ammo = Array(n + 1).fill(0);
//     let damageDone = [];

//     for (let i = 0; i < call_id.length; i++) {
//         let soldierId = call_id[i];
//         let damage = ammo[soldierId];
//         damageDone.push(damage);

//         for (let j = 1; j <= n; j++) {
//             ammo[j]++;
//         }

//         ammo[soldierId] = 0;
//     }

//     return damageDone;
// }

// const readline = require('readline');
// const rl = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
// });

// rl.on('line', (input) => {
//     const inputArray = input.split(' ').map(Number);
//     const n = inputArray[1];
//     const call_id = inputArray[0];

//     const result = collectingStones(call_id, n);
//     console.log(result.join(' '));
// });









function collectingStones(call_id, n) {
    const result = [];
    const ammoCount = Array(n + 1).fill(0);
    let totalAmmo = 0;

    for (const id of call_id) {
        result.push(totalAmmo);
        totalAmmo += ammoCount[id] + 1;
        ammoCount[id] = 0;
    }

    return result;
}

const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];
rl.on('line', (line) => {
    input.push(line);
}).on('close', () => {
    const n = parseInt(input[0].split(' ')[0]);
    const call_id = input[1].split(' ').map(Number);

    const result = collectingStones(call_id, n);
    console.log(result.join(' '));
});