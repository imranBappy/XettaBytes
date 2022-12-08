const number = 1;
const result = (function (number) {
    delete number;
    return number;
})(10)

console.log(result);
