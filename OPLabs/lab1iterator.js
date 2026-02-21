import {generateRoundRobin} from './lab1generator.js';
import { options } from './lab1generator.js';

let duration = 1000; 
let startTime = Date.now();
console.log("startTime", startTime);
let finalTime = startTime + duration;
console.log("finalTime", finalTime);

while (Date.now() < finalTime) {
   console.log(generateRoundRobin(options));
}