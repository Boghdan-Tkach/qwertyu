function sum1 (args) {
    let summ=0
    for (let i =0; i < args.length; i++){
        summ+=args[i]
    }
    return summ
}
console.log(sum1([1,2,3]))
console.log(sum1([-1,10,0.5]))


function sum2 (args) {
    let summ=0
    for (const value of args){
        summ+=value
    }
    return summ
}
console.log(sum2([1,2,3]))
console.log(sum2([-1,10,0.5]))


function sum3 (args) {
    let j = 0;
    let summ = 0
    while (j < args.length) {
        summ+=args[j]
        j++;
    }
    return summ
}
console.log(sum3([1,2,3]))
console.log(sum3([-1,10,0.5]))


function sum4 (args) {
    let i = 0;
    let summ = 0
    do {
        summ+=args[i]
        i++;
    } 
    while (i < args.length);
    return summ
}
console.log(sum4([1,2,3]))
console.log(sum4([-1,10,0.5]))


function sum5 (args) {
    summ = args.reduce((acc, val) => acc + val, 0)
    return summ
}
console.log(sum5([1,2,3]))
console.log(sum5([-1,10,0.5]))

