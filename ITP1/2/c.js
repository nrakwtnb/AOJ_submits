var inputs = require('fs').readFileSync('/dev/stdin', 'utf8').split(" ");

a = ~~inputs[0];
b = ~~inputs[1];
c = ~~inputs[2];

x = Math.min(a,b,c)
z = Math.max(a,b,c)
y = a+b+c-x-z
console.log(`${x} ${y} ${z}`);

