#include <stdio.h>
#include <string.h>
#include "kernel/boot.h"
#include "packages/packet-manager.h"
#include "kernel/terminal.h"

int main()
{
  boot();
  terminal();
  return 0;
}
