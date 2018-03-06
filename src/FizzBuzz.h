#ifndef FIZZBUZZ_H_
#define FIZZBUZZ_H_

#include <string>

using namespace std;

class FizzBuzz {
public:
	static string fizzBuzz(int value) {
		if (value % 15 == 0) return "FizzBuzz";
		if (value % 3 == 0) return "Fizz";
		if (value % 5 == 0) return "Buzz";
		return to_string(value);
	}
};

#endif /* FIZZBUZZ_H_ */
