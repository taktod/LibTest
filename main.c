/*
 * main.c
 *
 *  Created on: 2014/07/06
 *      Author: todatakahiko
 */

#if HAVE_CONFIG_H
#  include <config.h>
#endif

#include "hello.h"

int main (int argc, const char* argv[]) {

  // hello関数はhello.c内にある関数だ

  return hello("World!!");
}
