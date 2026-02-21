let qwerty = []
let a = 0
const pisi4ka = []


function average(a,b){
    return (a+b)/2
}

function square(a){
    return a*a
}

function cube(a){
    return a**3
}

// function range(start, end){
//     let i = start
//     while (i <= end){
//         i+=1
//     }
//     return i
// }

function taskk (v1){
    a = average( square(v1) , cube(v1) )
    pisi4ka.push({ Number:v1 , Result: a })
    console.log(pisi4ka)
}

function rangetaskk (start, end){
    let i = start
    while (i <= end){
        taskk(i)
        i+=1
    }
    // if (i > end){
    //     return;
    // }
    // if (i <= end){
    //     taskk(i)
    //     i+=1
    // }
}


// taskk(3)
// console.log(pisi4ka)

rangetaskk(0,9)


// console.log(square(2))
// console.log(average(2,5))