const storage = {};

function array() {
    return [];
}

const arr = array();

arr.push("a");
arr.push("b");
arr.push("c");

console.log(arr[0]);
console.log(arr[1]);
console.log(arr[2]);

console.log(arr.pop());
console.log(arr.pop());
console.log(arr.pop());
console.log(arr.pop());

console.log(arr); 