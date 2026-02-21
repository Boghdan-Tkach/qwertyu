const piskas = [
  { name: "Marcus Aurelius", phone: "+380445554433" },
  { name: "Petro Poroshenko", phone: "+88005553535" },
  { name: "Pes Patron", phone: "+380148869420" },
  { name: "Bondarenko Oleg", phone: "+380667778899" },
];
function findphonebyname(namee) {
  for (let i = 0; i < piskas.length; i += 1) {
    if (namee == piskas[i].name) {
      console.log(piskas[i].phone);
    }
  }
}

// findphonebyname("Pes Patron");

const tilifonanigga = {};

for (let j = 0; j < piskas.length; j += 1) {
  tilifonanigga[piskas[j].name] = piskas[j].phone;
}
console.log(tilifonanigga);

function findphonebynameee(nameee){
    console.log(tilifonanigga[nameee])
}

findphonebynameee('Petro Poroshenko')

// function findphonebynameee(nameee){
//       for (let ij = 0; ij < 4; ij += 1) {
//     if (namee == piskas[i].name) {
//       console.log(piskas[i].phone);
//     }
//   }
// }
