#include <stdio.h>
#include <string.h>
#include "../include/string.h"

struct __m3inFile
{
  int fileId;
  string fileName;
  int fileType;
  int value;
};

typedef struct __m3inFile MFILE;

const int MAXFILE = 100000;

MFILE fileBuffer[MAXFILE];

int createFile(string filename , int isRoot);
int findFile(string filename , int* found);
int deleteFile(string filename , int isRoot);
