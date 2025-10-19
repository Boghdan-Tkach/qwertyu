const characters = 'abcdefghijklmnopqrstuvwxyz0123456789';

function generateKey (lengthh, contentt){
    let b = ""
    for (let i = 0; i < lengthh; i++){
        let a = contentt[Math.floor(Math.random() * contentt.length)]
        b = b+a
    }
    return b
}

const key = generateKey(16, characters);
console.log(key);

