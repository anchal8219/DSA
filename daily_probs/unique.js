(function main() {
    
    const readline = require('readline');
    
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });
    
    var firstUniqChar = function(s) {
        for (let i = 0; i < s.length; i++) {
            let before = s.slice(0, i);
            let after = s.slice(i + 1);
            
            if (!before.includes(s[i]) && !after.includes(s[i])) {
                return i; // Return the index of the first unique character
            }
        }
        
        return -1; // Return -1 if no unique character is found
    };
    
    rl.on('line', (input) => {
        console.log(firstUniqChar(input));
    });
        
}());
