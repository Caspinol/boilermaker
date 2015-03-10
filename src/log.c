#include <stdio.h>
#include <stdarg.h>
#include "inc/log.h"

static void log(FILE *f, const char *fmt, va_list args){
  vfprintf(f, fmt, args);
}

void bm_log_err(const char *fmt, ...){
  va_list args;
  va_start(args, fmt);
  log(stderr, fmt, args);
  va_end(args);
}

void bm_log_info(const char *fmt, ...){
  va_list args;
  va_start(args, fmt);
  log(stdout, fmt, args);
  va_end(args);
}
