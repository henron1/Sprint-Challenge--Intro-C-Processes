#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  printf("There are %d arguments that exist:\n", argc);
  // Open directory
  DIR *dir;
  // Repeatly read and print entries

  // Close directory
  closedir(dir);
  return 0;
}