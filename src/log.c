#include <stdio.h>
#include <stdarg.h>
#include "inc/log.h"

static void bm_log(FILE *f, char const *fmt, va_list args){
  vfprintf(f, fmt, args);
}

void bm_log_err(char const *fmt, ...){
  va_list args;
  va_start(args, fmt);
  bm_log(stderr, fmt, args);
  va_end(args);
}

void bm_log_info(char const *fmt, ...){
  va_list args;
  va_start(args, fmt);
  bm_log(stdout, fmt, args);
  va_end(args);
}
