const string1 = 'level';
const string2 = 'LEvel.';

// Function can take up to two strings
const isPalindrome = (str1, str2) => {
  let string = str1
      .replace(/[^\w]/gi, "") // replace all non-words characters
      .toLowerCase(); // make all characters lower cased
  if (str2) {
    let reversedString = str2
      .replace(/[^\w]/gi, "")
      .toLowerCase()
      .split('') // make an array
      .reverse() // revers the array
      .join(''); // make a string
    return string == reversedString;
  } else {
    return string == string.split('').reverse().join('');
  }
}

// Test
console.log(isPalindrome(string1, string2)) // true
console.log(isPalindrome(string1)) // true
console.log(isPalindrome(string2)) // true