#include <stdio.h>
#include <gcrypt.h>

int
main(int argc, char *argv[])
{
  char *v = (char *)gcry_check_version(NULL);
  printf("using libgcrypt: %s\n", v);
  return 0;
}
