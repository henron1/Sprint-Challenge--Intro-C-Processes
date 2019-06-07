#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  DIR *dir;
  struct dirent *d;

  // Parse command line
  int i;

    printf("There are %d command line argument(s):\n", argc);

    for (i = 0; i < argc; i++) {
        printf("   %s\n", argv[i]);
    }

    return 0;
  // Open directory
  dir = opendir();
  // Repeatly read and print entries
  // Close directory
  closedir();
  return 0;
}
