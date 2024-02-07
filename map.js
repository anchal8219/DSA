
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