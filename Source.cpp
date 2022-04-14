/*
This is an examle of a common programming challenge set by development companies.
Its called the "Fizzbuzz" test.
In short, it challenges the prospective developer to figure out the challenge of stepping through the numbers 1-100
and replace the values that are multiples of 3 with "fizz" and 5 with "buzz". It has the unique challenge where the value that are multiples of both
3 and 5 MUST be "fizzbuzz"
as it is a multiple of both 3 and 5. This code should be neat and scalable.

This example was coded by Katherine Binnie-Ritchie on 07/04/2021.
The code below is provided as an example, and is shared under the CC-BY 4.0. More details here --> https://creativecommons.org/licenses/by/4.0/legalcode
Comments are used through the code in order to explain what is happening.

Please note, whilst this is C++, similar elements will appear in other languages (C#, Java, Python, etc).
*/

//Include libraries. These are pre-compiled to carry out functions without having to specifically define them each time.
//In this case, iostream for the console, and string to handle strings.
#include <iostream>
#include <string>


//Main application. There is no need for modules in this example.
int main()
{
	//Begin loop. This is a for loop, as this is designed to step through things and then increase a counter at the end of it.
	//In this case, the loop is to start at 1 and count to 100. 
	for (int i = 1; i <= 100; i++)
	{
		//Declare a string to be the output
		std::string out = "";
		//Test if the value of i is a multiple of 3. If so, append the output string with "fizz".
		if (i % 3 == 0)
		{
			out += "fizz";
		}
		//Test if the value i is a multiple of 5. If so, append the output string with "buzz".
		if (i % 5 == 0)
		{
			out += "buzz";
		}
		//Test to see if the string is empty. If so, cast the value i to a string value, then store that into the output string.
		if (out.empty())
		{
			out = std::to_string(i);
		}

		//Display the string on the screen, with a carriage return at the end.
		std::cout << out << endl;

		//Loop now re-runs
	}

	//Program exits normally.
	return 0;
}
