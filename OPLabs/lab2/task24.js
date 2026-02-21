'use strict';

const fn = null;

module.exports = { fn };

const a = 'Amogus'
var b = 'Abobus'

const user1 = new Object();
user1.name = a ;

const user2 = new Object();
user2.name = b ;

console.log(user1);
console.log(user2);

user1.name = 'Changed Amogus' ;
user2.name = 'Changed Abobus' ;

// a = 'Changed Amogus'  Не працюєє
// b = 'Changed Abobus'

console.log(user1);
console.log(user2);