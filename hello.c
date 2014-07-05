/*
 * hello.c
 *
 *  Created on: 2014/07/06
 *      Author: todatakahiko
 */

#if HAVE_CONFIG_H
#  include <config.h>
#endif

#include <stdio.h>
#include "hello.h"

int hello (const char* who) {
  printf("Hello %s!\n", who);
  return 0;
}
