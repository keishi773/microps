#include "platform.h"

#include "util.h"

// プロトコルスタックを初期化
int
net_init(void)
{
    // INFOレベルのログメッセージを出力するマクロ
    infof("initialize...");
    if (platform_init() == -1) {
        errorf("platform_init() failure");
        return -1;
    }
    infof("success");
    return 0;
}

// プロトコルスタックを起動
int
net_run(void)
{
    infof("start up...");
    if (platform_run() == -1) {
        errorf("platform_run() failure");
        return -1;
    }
    infof("success");
    return 0;
}

// プロトコルスタックを停止
int
net_shutdown(void)
{
    infof("shutting down...");
    if (platform_shutdown() == -1) {
        warnf("platform_shutdown() failure");
    }
    infof("success");
    return 0;
}
