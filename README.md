<h1>Programs Specification</h1>
<p>There are three different programs, each of which follows the following specifications:</p>
<ol>
  <li>The program should ask the user for the name of the input and output files.</li>
  <li>The program should open the input file in read mode and read line by line all values of the subsequent numbers. There are three possible cases:</li>
  <ul>
    <li>Multiple numbers in a single line</li>
    <li>A single number in every line</li>
    <li>A mix of the previous two cases</li>
  </ul>
  <li>After reading all file lines, the program should print on a screen the values of all numbers.</li>
  <li>The program should place all numbers (you can use stdlib's atoi() function to convert char* to int or any other solution using string) into the array of ints (you have to count the number of values read from the file).</li>
  <li>The program should place in the output file and print on a screen, in the sorted ascending order, only the numbers that meet the following requirements:</li>
  <ul>
    <li>Three-digit numbers whose first digit is greater than the last one.</li>
    <li>Four-digit numbers whose first digit is the same as the last one.</li>
    <li>Three-digit numbers whose first digit is less than the last one.</li>
  </ul>
</ol>
<p>Note: The code provided is written in C++ and includes functions for counting the number of digits in a number, determining the first and last digits of a number, and sorting an array of integers using the bubble sort algorithm. It also includes file input and output using fstream. </p>
