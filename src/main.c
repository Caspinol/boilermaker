#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "inc/log.h"

char *proj_name;

int main(int argc, char **argv){
  int argval;
  
  if(argc < 2){
    return -1;
  }
  
  proj_name = argv[1];

  bm_log_info("Project name: [%s]\n", proj_name);

  while((argval = getopt(argc, argv, "vrlhn") != EOF)){
    switch(argval){

    case 'v':
      //show version
      break;

    case 'r':
      //create readme file
      break;

    case 'l':
      //create license file
      break;

    case'h':
      //display help
      break;

    case 'n':
      //no makefile
      break;

    default:
      return -1;
    }
  }

  /* start */
  struct stat st = {0};
  if(stat(proj_name, &st) == -1){
    bm_log_info("Creating directory [%s].\n", proj_name);
    mkdir(proj_name, 755);
  }
  return 0;
}
