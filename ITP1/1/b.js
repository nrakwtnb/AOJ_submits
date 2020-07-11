var x = require('fs').readFileSync('/dev/stdin', 'utf8');
x = parseInt(x, 10);

console.log(x*x*x);
