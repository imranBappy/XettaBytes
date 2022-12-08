const arr = [2, 3, 4, 5, 7, 7, 7];
//           0  1  2  3  4  5  6
function binary_search(arr, lb, ub, targer) {
    if (lb <= ub) {
        let mid = Math.floor((lb + ub) / 2)
        if (arr[mid] > targer)
            return binary_search(arr, lb, mid - 1, targer)
        else if (arr[mid] < targer)
            return binary_search(arr, mid + 1, ub, targer)
        else if (ub <= mid + 1 && arr[mid + 1] == targer) {
            return binary_search(arr, mid + 1, ub, targer)
        }
        else {
            return mid
        }
    } else {
        return -1;
    }
}

let value = binary_search(arr, 0, arr.length - 1, 7);
console.log(value);

console.log(arr[value]);