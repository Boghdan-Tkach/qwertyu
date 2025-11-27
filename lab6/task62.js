
const inc = x => ++x;
const twice = x => x * 2;
const cube = x => x ** 3;

const compose = (...fns) => (x) => {
    try{
        return fns.reduceRight((acc, value) => value(acc), x);
    }catch (Error) {
        return undefined;
    }
}

console.log(compose(inc, twice, cube)(5)); 