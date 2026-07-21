/**
 * Calculators, watches, and other electronic devices often rely on seven-segment displays for numerical output. To form a digit, such devices "turn on" some of the seven segments while leaving others "off":
 *  _
 * | |
 * |_| ... etc, not doing allat
 * Supose that we want to set up an array thar remembers which segments should be "on" for each digit. Let's number the segments as follows:
 *  _   0
 * |_| 5 6 1
 * |_| 4 3 2
 * Here's what the array might look like with each row representing one digit:
 * const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, ...};
 * I've given you the first row of the initializer; fill in the rest.
 */

const int segments[10][7] = {   {/*0*/1, 1, 1, 1, 1, 1, 0}, 
                                {/*1*/0, 1, 1, 0, 0, 0, 0}, 
                                {/*2*/1, 1, 0, 1, 1, 0, 1}, 
                                {/*3*/1, 1, 1, 1, 0, 0, 1}, 
                                {/*4*/0, 1, 1, 0, 0, 1, 1}, 
                                {/*5*/1, 0, 1, 1, 0, 1, 1}, 
                                {/*6*/1, 0, 1, 1, 1, 1, 1}, 
                                {/*7*/1, 1, 1, 0, 0, 0, 0}, 
                                {/*8*/1, 1, 1, 1, 1, 1, 1}, 
                                {/*9*/1, 1, 1, 1, 0, 1, 1}};