var inputs = require('fs').readFileSync('/dev/stdin', 'utf8').split(" ");

a = ~~inputs[0];
b = ~~inputs[1];
c = ~~inputs[2];

if (a<b && b<c) {
    console.log("Yes");
} else {
    console.log("No");
}

