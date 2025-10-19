// const range{start: number, end: number}

let numb = []

function range(start, end){
    numb=[]
    let i = start
    while (i <= end){
        numb.push(i)
        i+=1
    }
    console.log(numb)
}

function rangeodd(start1, end1){
    numb=[]
    let j = start1
    while (j <= end1){
        if (j%2 == 1){
            numb.push(j)
        }
    j+=1
    }
    console.log(numb)
}

range(15, 30)
rangeodd(15, 30)
