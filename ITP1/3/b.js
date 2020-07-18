let inputs = require('fs').readFileSync('/dev/stdin', 'utf8').split("\n");

let i = 0;
while (true) {
    x = inputs[i];
    if (~~x===0) {
        break;
    }
    i++;
    console.log(`Case ${i}: ${x}`);
}

