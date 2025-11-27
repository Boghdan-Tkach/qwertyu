const inc = x => ++x;
const twice = x => x * 2;
const cube = x => x ** 3;

const pipe = (...fns) => {
    for (const f of fns) {
        if (typeof f !== 'function') {
            throw new Error('Всі аргументи повинні бути функціями');
    }
  }
    return x => fns.reduce ((acc, value) => value(acc), x);

}



const f = pipe(inc, twice, cube);
const x = f(5);

console.log(x);

const g = pipe(inc, inc);
const y = g(7);

console.log(y);

// const g = pipe(inc, 2, cube);
// const y = g(5);

// console.log(y);