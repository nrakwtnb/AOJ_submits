var inputs = require('fs').readFileSync('/dev/stdin', 'utf8').split(" ");
h = inputs[0];
w = inputs[1];
w = parseInt(w, 10);
h = parseInt(h, 10);

console.log(h*w, 2*(h+w));
