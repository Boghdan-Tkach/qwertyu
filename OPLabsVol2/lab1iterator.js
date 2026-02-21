import {generateRoundRobin} from './lab1generator.js';
import { options } from './lab1generator.js';

const iterator = generateRoundRobin(options);

let duration = 1000; 
let startTime = Date.now();
let finalTime = startTime + duration;

while (Date.now() < finalTime) {
   // console.log(generateRoundRobin(options));
   console.log(iterator.next().value); 
}