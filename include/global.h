/**
 * @description:    用来定义一些全局变量
 */
#ifndef __GLOBAL_H__
#define __GLOBAL_H__
#include "stdafx.h"
#include "threadpool.h"
#include "socket.h"
// 用于设置进程标题
extern int     g_os_argc;                  //参数个数
extern char    **g_os_argv;                //命令行参数数组首地址

extern int     g_daemonized;               //守护进程标记，标记是否启用了守护进程模式
extern int     g_procPid;                   //记录运行的进程id
extern sig_atomic_t  g_childReraise;        //重新启动挂了的子进程标记 

extern sig_atomic_t  g_masterProcExitCode;        //父进程收到信号后，通知子进程退出
extern sig_atomic_t  g_workerProcExitCode;          //工作进程收到信号后退出
extern int           g_processStatuCode;
// extern CLogicSocket  g_socket;  
// extern CThreadPool   g_threadpool;
extern CSocket          g_socket;
extern threadpool       g_threadpool;
// extern pid_t         ngx_pid;
// extern pid_t         ngx_parent;
// extern ngx_log_t     ngx_log;
// extern int           ngx_process;   
// extern sig_atomic_t  ngx_reap;   
// extern int           g_stopEvent;

#endif