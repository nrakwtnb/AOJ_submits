let inputs = require('fs').readFileSync('/dev/stdin', 'utf8').split(" ");

const a = ~~inputs[0];
const b = ~~inputs[1];
const c = ~~inputs[2];

let count = 0;
for (d=a;d<=b;d++) {
    if (c%d === 0) {
        count += 1;
    };
};
console.log(count);
