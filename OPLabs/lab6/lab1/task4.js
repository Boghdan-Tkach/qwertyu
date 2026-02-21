const spisakkkkkk = [true, 'hello', 5, 12, -200, false, false, 'word']

const nasssifff = {}

for (const item of spisakkkkkk) {
    let a = typeof item
    nasssifff[a]= (nasssifff[a] || 0) + 1
    console.log(nasssifff)
}

// const masssifff = { number: 0, string: 0, boolean: 0 }

// for (const item of spisakkkkkk) {
//     console.log (typeof item)
//     a = typeof item
//     if (a == 'number') {
//         masssifff.number += 1
//     }
//     if (a == 'string') {
//         masssifff.string += 1
//     }
//     if (a == 'boolean'){
//         masssifff.boolean += 1
//     }
//     console.log(masssifff)
// }

// const obj = { n: 5 };