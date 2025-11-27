// const m = max([[1, 2, 3], [4, 5, 6], [7, 8, 9]]);
// console.log(m);

function m (x){
    let max = null;
    let i = 0;
    while (i < x.length){
        let j = 0;
        while (j < x[i].length){
            if (max === null){
                max = x[i][j];
            }
            else if (x[i][j] > max){
                max = x[i][j];
            }
            j++;
        }
        i++;
    }
    return console.log(max);
}
m([[1, 2, 3], [4, 5, 6], [7, 8, 9]]);
m([[-10, -20, -3], [-4, -5, -6], [-7, -8, -9]]);
m([[0.1, 0.2], [0.3, 0.4], [0.5, 0.6]]);
