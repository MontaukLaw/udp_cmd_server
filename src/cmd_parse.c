#include "app_comm.h"

// 录像开始命令
#define REC_CMD "rec_cmd"
#define REC_START "start"
#define REC_STOP "stop"

static bool if_detecting = false;

// 解析接收到的命令
void parse_cmd(char *cmd, int cmd_len)
{
    printf("Received data len %d: %s\n", cmd_len, cmd);
    char *cmdType = strtok(cmd, ":");
    char *cmdValue = NULL;

    // 使用冒号分隔命令
    if (cmdType != NULL)
    {
        // 使用分号分隔命令
        cmdValue = strtok(NULL, ";");
        if (cmdValue != NULL)
        {
            printf("%s : %s\n", cmdType, cmdValue);

            if (strcmp(cmdType, REC_CMD) == 0 && strcmp(cmdValue, REC_START) == 0)
            {
                // 开启录像
                printf("start detect\n");
            }
            else if (strcmp(cmdType, REC_CMD) == 0 && strcmp(cmdValue, REC_STOP) == 0)
            {
                printf("stop detect\n");
            }
        }
    }
}
