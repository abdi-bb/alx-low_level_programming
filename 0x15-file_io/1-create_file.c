#include "main.h"

int create_file(const char *filename, char *text_content) {
  if (filename == NULL) {
    return -1;
  }

  FILE *fp = fopen(filename, "w");
  if (fp == NULL) {
    return -1;
  }

  if (text_content != NULL) {
    int result = fputs(text_content, fp);
    if (result < 0) {
      fclose(fp);
      return -1;
    }
  }

  fclose(fp);
  int success = chmod(filename, S_IRUSR | S_IWUSR);
  return (success == 0) ? 1 : -1;
}

