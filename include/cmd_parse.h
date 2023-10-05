#ifndef _CMD_PARSE_H_
#define _CMD_PARSE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

void parse_cmd(char *cmd, int cmd_len);

#endif