const myIP = '77.47.209.60'
let IPpisun = myIP.split(".")



IPnumber = [] 
for (let i = 0; i<IPpisun.length;i++){
    IPnumber.push (Number(IPpisun[i]))
}

// console.log(IPnumber)

IPnumber[0] <<= 3*8

IPnumber[1] <<= 2*8

IPnumber[2] <<= 8

// console.log(IPnumber)

let sum = 0;

for (let n of IPnumber) {
  sum += n;
}

console.log(sum);