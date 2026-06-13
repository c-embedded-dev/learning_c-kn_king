/** 
 * In the dweight.c program (Section 2.4), which spaces are essential?
 * 
 * #include <stdio.h>
 *
 *  int main(void)
 *  {
 *      int height, length, width, volume, weight;
 *     
 *      height = 50;
 *      length = 20;
 *      width = 30;
 *      volume = height * length * width;
 *      weight = (volume + 165 ) / 166;
 *
 *      printf("Dimensions: %dx%dx%d\n", length, width, height);
 *      printf("Volume (cubic centimeters): %d\n", volume);
 *      printf("Dimensional weight (pounds): %d\n", weight);
 * 
 *      return 0;
 *  }
 * 
 * The essential ones are int main, int height and return 0, tho I though that the one in #include <stdio.h> was essential, but it wasn't
*/