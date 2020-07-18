let inputs = require('fs').readFileSync('/dev/stdin', 'utf8').split("\n");

let i = 0;
while (true) {
    l = inputs[i].split(" ");
    x = ~~l[0];
    y = ~~l[1];
    if (x===0 && y===0) {
        break;
    };
    i++;
    if (x>y) {
        z = y;
        y = x;
        x = z;
    };
    console.log(`${x} ${y}`);
}

