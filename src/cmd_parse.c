#include "cmd_parse.h"

// 解析命令
void parse_cmd(char *cmd, int cmd_len)
{
    printf("Received data :%s len: %d\n", cmd, cmd_len);

    // 从命令中提取出命令类型
    char *cmd_type = strtok(cmd, ":");
}
