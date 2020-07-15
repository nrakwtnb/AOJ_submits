var inputs = require('fs').readFileSync('/dev/stdin', 'utf8').split(" ");

W = ~~inputs[0];
H = ~~inputs[1];
x = ~~inputs[2];
y = ~~inputs[3];
r = ~~inputs[4];

horizontal = r <= x && x <= W-r;
vertical = r <= y && y <= H-r;
if (horizontal && vertical) {
        console.log("Yes");
} else {
        console.log("No");
}

