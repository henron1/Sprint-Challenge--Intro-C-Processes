#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h> //st_size to find file size

/**
 * Main
 */
int main(int argc, char **argv)
{
  //parse command line taken from examples exercise
  int i;
  for (i = 0; i < argc; i++)
  {
    printf("   %s\n", argv[i]);
  }

// Open directory and find file size!
  struct stat buf;
  if (argc > 1)
  {
    stat(argv[1], &buf);
  }
  else
  {
    stat(".", &buf);
  }
  printf("file size is %lld\n", buf.st_size);

  DIR *d;
  struct dirent *dir;
  
  // Close directory
  return (0);
}