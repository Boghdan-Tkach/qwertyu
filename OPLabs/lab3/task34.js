let a = [];
const iface = {
  m1: x => [x],
  m2: function (x, y) {
    return [x, y];
  },
  m3(x, y, z) {
    return [x, y, z];
  }
};

for (let i in iface){
    a.push([i, iface[i].length]);
}
console.log(a)