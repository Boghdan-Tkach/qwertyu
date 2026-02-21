//я вибрав другу опцію round robin generator//

export const options = ['Богдан','Олег','Петро ОЛЕКСІЙОВИЧ Порошенко']

export function generateRoundRobin (arr) {
    return arr[Math.floor(Math.random() * arr.length)]
};

console.log (generateRoundRobin (options))


for (let i = 0; i < 3; i++){
    console.log (generateRoundRobin (options))
}





//console.log (arr[Math.floor(Math.random() * arr.length)]);//