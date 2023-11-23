# FizzBuzz in C++

## Introduction

FizzBuzz is a classic programming challenge that tests a programmer's ability to write code that meets a specific set of requirements. The challenge is to write a program that prints the numbers from 1 to 100, with the following rules:

* For numbers divisible by 3, print "Fizz" instead of the number.
* For numbers divisible by 5, print "Buzz" instead of the number.
* For numbers divisible by both 3 and 5, print "FizzBuzz" instead of the number.

## History

Fizz buzz is a group word game for children to teach them about division.

## Why Interviewers Use FizzBuzz

There are several reasons why interviewers use the FizzBuzz challenge. First, it is a simple and easy-to-understand problem that can be solved in a variety of ways. This makes it a good way to assess a candidate's problem-solving skills and their ability to think creatively.

Second, the FizzBuzz challenge can be used to identify candidates who are familiar with the basics of programming. A candidate who cannot write a correct FizzBuzz program in their chosen language is likely to struggle with more complex programming tasks.

Finally, the FizzBuzz challenge can be used to assess a candidate's coding style. A candidate who writes a clear, concise, and well-organized FizzBuzz program is likely to be a good programmer.

## The Most Concise Method

The most concise method for solving the FizzBuzz challenge is to use a ternary operator. A ternary operator is a shorthand way of writing an if-else statement. For example, the following code is equivalent to the if-else statement below:

```c++
(condition) ? trueExpression : falseExpression;
```

```c++
if (condition) {
  return trueExpression;
} else {
  return falseExpression;
}
```

The ternary operator can be used to write a concise FizzBuzz program as follows:

```c++
for (int i = 1; i <= 100; i++) {
  std::cout << ((i % 3 == 0) ? "Fizz" : "") << ((i % 5 == 0) ? "Buzz" : "") << ((i % 3 == 0 && i % 5 == 0) ? "" : i) << std::endl;
}
```

This code will print the numbers from 1 to 100, following the rules of the FizzBuzz challenge. The ternary operators are used to conditionally print the strings "Fizz" and "Buzz". The empty string is printed if the number is not divisible by 3 or 5.

### JavaScript Example

Here's an example of a concise FizzBuzz implementation in JavaScript:

```javascript
for (let i = 1; i <= 100; i++) {
  console.log((i % 3 === 0 ? 'Fizz' : '') + (i % 5 === 0 ? 'Buzz' : '') || i);
}
```

This code utilizes a combination of ternary operators and the logical OR (||) operator to achieve a concise and efficient FizzBuzz solution. The ternary operators dynamically generate the output based on the divisibility rules, while the OR operator ensures that the original number is printed if it doesn't fall under any of the specified conditions.

### Bitwise Operator Example

```javascript
for (let i = 1; i <= 100; i++) {
  const isFizz = !!((i % 3) & 1);
  const isBuzz = !!((i % 5) & 1);
  const output = (isFizz ? "Fizz" : "") + (isBuzz ? "Buzz" : "");

  if (output) {
    console.log(output);
  } else {
    console.log(i);
  }
}
```

This code uses bitwise AND (&) and bitwise NOT (!) operators to efficiently determine whether the number is divisible by 3 or 5. The `&` operator checks if the least significant bit is 1, indicating divisibility by the corresponding divisor. The `!` operator negates the result, converting a non-zero value (indicating divisibility) to true and a zero value (indicating non-divisibility) to false. The final output is constructed using a combination of the `isFizz` and `isBuzz` variables, concatenating "Fizz" if the number is divisible by 3 and "Buzz" if divisible by 5. If neither condition is met, the original number is printed. This method utilizes bitwise operations for efficient divisibility checks, resulting in a concise and optimized FizzBuzz implementation.

## Conclusion

The FizzBuzz challenge is a simple but effective way to assess a programmer's skills. By following the principles outlined above, you can write an efficient and optimized FizzBuzz program that will impress your interviewer.