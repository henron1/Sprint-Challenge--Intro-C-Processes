#include <stdio.h>
#include <dirent.h> //readdir
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
  printf("file size = %lli\n", buf.st_size);

  DIR *d;
  struct dirent *dir;
  // Repeat read and print entries
  d = (argc > 1) ? opendir(argv[1]) : opendir(".");
  if (d) { // if director is present
    while ((dir = readdir(d)) != NULL) // basically returning a pointer to a struct at current position at dir
    {
      printf("%s\n", dir->d_name); //printing directory name
    }
  }
  // Close directory
  return (0);
}