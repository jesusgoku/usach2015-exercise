#ifndef __UTILS_H__
#define __UTILS_H__

/**
 * Get integer from program arguments or read from user input
 * 
 * @param  argc argument count
 * @param  argv argument values
 * @return      a integer value for use
 */
int getOrReadInteger(int argc, char *argv[]);

/**
 * Get string from program arguments or read from user input
 * @param  argc argument count
 * @param  argv argument values
 * @return      (char *) to a string value
 */
char *getOrReadString(int argc, char *argv[]);

#endif // __UTILS_H__
