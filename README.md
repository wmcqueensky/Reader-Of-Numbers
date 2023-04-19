<h1>Program Specification</h1>
<p>The program reads integers from an input file, sorts and outputs the integers that meet certain criteria to an output file. The program asks for the name of the input and output files and opens them in read and write mode, respectively.</p>
<h2>Input File</h2>
<p>The input file can contain:</p>
<ul>
  <li>multiple numbers in a single line</li>
  <li>a single number in every line</li>
  <li>a mix of the previous two cases.</li>
</ul>
<h2>Output File</h2>
<p>The program places in the output file and prints on a screen in the sorted ascending order only the numbers that meet the following requirements:</p>
<ul>
  <li>Three digit numbers which first digit is greater than the last one.</li>
  <li>Four digit numbers which first digit is the same as the last one.</li>
  <li>Three digit numbers which first digit is less than the last one.</li>
</ul>
<h2>How to use</h2>
<ul>
  <li>The program prompts the user to input the name of the input file and the output file.</li>
  <li>The program opens the input file and reads line by line all values of the subsequent numbers.</li>
  <li>After reading all file lines, the program prints on the screen the values of all numbers.</li>
  <li>The program converts the numbers from strings to integers and stores them in an array.</li>
  <li>The program sorts the array and outputs to the output file and prints on the screen the sorted numbers that meet the above requirements.</li>
</ul>
<h2>Functions</h2>
<ul>
  <li><code>int How_many_digits(int number)</code> - returns the number of digits of a given integer.</li>
  <li><code>int First_and_Last_digit(int number)</code> - returns an integer that indicates the relationship between the first and last digits of a given integer.</li>
  <li><code>void bubble_sort(int arr[], int num)</code> - sorts an array of integers using bubble sort.</li>
</ul>
<h2>Requirements</h2>
<ul>
  <li>C++ 11 or higher</li>
  <li>Compiler that supports C++ 11 or higher</li>
</ul>
<h2>How to run</h2>
<ul>
  <li>Download the code and compile using a C++ compiler.</li>
  <li>Run the compiled program in a terminal or command prompt.</li>
  <li>Follow the instructions given by the program.</li>
</ul>
<h2>Example usage</h2>
<pre>
Insert the name for the input file: input.txt
Insert the name for the output file: output.txt

You have access to the files

Numbers:
342 123 444 231 555 365 789 321 234 567 432 333

Good numbers:
342 231 789 432 333

Good numbers, but sorted:
231 342 432 789 333
</pre>
