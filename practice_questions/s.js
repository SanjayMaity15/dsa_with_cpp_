const count = {};

const arr = [10, 30, 10, 20, 10, 20, 20, 20, 20, 30, 10];

arr.forEach((elem) => {
	if (count.hasOwnProperty(elem)) {
		count[elem] = count[elem] + 1;
	} else {
		count[elem] = 1;
	}
});

const entry = Object.entries(count);

console.log(entry);

entry.sort((a, b) => b[1] - a[1]);

console.log(entry);

entry.forEach((elem) => {
	for (let i = 0; i < elem[1]; i++) {
		console.log(elem[0]);
	}
});
