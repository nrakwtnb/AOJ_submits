var inputs = require('fs').readFileSync('/dev/stdin', 'utf8').split(" ");

a = ~~inputs[0];
b = ~~inputs[1];

if (a<b) {
    rel = "<";
} else if (a>b) {
    rel = ">";
} else {
    rel = "==";
}

console.log(`a ${rel} b`);
