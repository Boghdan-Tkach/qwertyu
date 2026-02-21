const seq = (...args) => {
	if (args.length > 0 && typeof args[0] === "number") {
		return args[0];
	}

	const functions = [...args];

	const packFunction = (...new_args) => {
		if (typeof new_args[0] === "function") {
			functions.push(...new_args);
			return packFunction;
		} else {
			return functions.reduceRight((result, fn) => fn(result), new_args[0]);
		}
	};
	return packFunction;
};

console.log(seq((x) => x + 7)((x) => x * 2)(5));
console.log(seq((x) => x * 2)((x) => x + 7)(5));
console.log(seq((x) => x + 1)((x) => x * 2)((x) => x / 3)((x) => x - 4)(7));