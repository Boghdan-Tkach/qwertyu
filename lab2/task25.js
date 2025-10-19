let person = {}

function createUser(name1, city){
    person = new Object();
    person.name = name1 ;
    person.city = city ;
    return person;
}

person = createUser('BogdanSuperUbiyza228', 'Kyiv');
console.log(person);