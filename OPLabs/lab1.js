

let options = ['Богдан','Олег','Петро ОЛЕКСІЙОВИЧ Порошенко']
let duration = 1000; 
let startTime = Date.now();
console.log("startTime", startTime);
function generateRoundRobin (arr) {
    
    console.log (arr[Math.floor(Math.random() * arr.length)]);
};