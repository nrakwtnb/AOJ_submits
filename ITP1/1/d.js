var t = require('fs').readFileSync('/dev/stdin', 'utf8');
t = ~~t;
h = Math.floor(t / 3600);
t -= 3600 * h;
m = Math.floor(t / 60);
t -= 60 * m;
s = t

console.log(`${h}:${m}:${s}`);
