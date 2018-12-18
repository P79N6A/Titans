# Titans Plugin

Titans以插件的形式来加载第三方依赖，并通过插件管理器来实现扩展
第三方依赖通过三步即可实现接入
- 1.实现插件的的标准接口
- 2.在插件管理器进行注册
- 3.插件配置文件加入相应配置

## 插件配置文件
**eg**
```shell
plugin_mgr = (
  {
    name = "SettingPlugin";
    priority = 0;
    strConfPath="../client/tmpl_test/conf/TestSvr.conf";
  },
  {
    name = "MtPlugin";
    priority = 1;
    iMtThreadNum=1000;
  },
  {
    name = "UlsPlugin";
    priority = 2;
  });
```

| 参数 | 描述 |
|:---:|:---:|:---:|
| name | 插件注册的名称 |
| priority | 插件加载优先级，0最高 |
| 其他 | 插件具体私有参数，配置会覆盖默认值 |

## 插件
**conf_plugin 通用的业务配置插件** 

| 参数 | 描述 | 默认值 |
|:---:|:---:|:---:|
| strConfPath | 业务配置文件路径 | "../conf/svr.conf" |
</br>

**flow_plugin 流水日志插件** 

| 参数 | 描述 | 默认值 |
|:---:|:---:|:---:|
| strFlowLogPath | 流水日志路径 | "../log" |
| strFlowLogPrefix | 流水日志文件前缀 | "flow_log" |
| iFlowLogLevel | 流水日志等级 | 0 (Debug) |
| iMaxFilesSize | 流水日志文件大小 | 52428800 |
| iMaxFilesNum | 流水日志文件数量 | 30 |
| iLogType | 流水日志类型 | 0 |
</br>
**usage**: FLOW_LOG(LOG_DEBUG, "This is flow log");

**mt_plugin 微线程插件** 

| 参数 | 描述 | 默认值 |
|:---:|:---:|:---:|
| iMtThreadNum | 微线程池大小 | 100000 |
</br>

**rpc_plugin rpc管理器插件** 

| 参数 | 描述 | 默认值 |
|:---:|:---:|:---:|
| strRpcMgrPath | rpc配置文件路径 | "./RpcMgrPath.conf" |
</br>

**tc_plugin tdbank插件** 

| 参数 | 描述 | 默认值 |
|:---:|:---:|:---:|
| strTDBankConfigPath | tdbank配置文件路径 | "../conf/config.json" |
| strTDBankBid | tdbank 上报bid | "b_sng_im_personal_live" |
| strTDBankTid | tdbank 上报tid | "personal_live_base" |
| iTdbankTest | 测试环境开关 | 1(1:测试环境 0:现网环境) |
</br>

**uls_plugin uls日志插件** 

| 参数 | 描述 | 默认值 |
|:---:|:---:|:---:|
| strUlsPath | uls日志路径 | "../log/" |
| iUlsId | uls 业务id | 0x940003 |
| iWaterLogId | 流水日志id | 107 |
| iColorLogId | 染色日志id | 2 |
| iWaterLogFlag | iWaterLogFlag | 1 |
| iColorLogFlag | iColorLogFlag | 1 |
| bOpenLocalLog | 开启本地日志 | false |
</br>