// This file is automatically generated by attr_register_tool.

#ifndef {{UP_SRV_NAME}}_SRC_COMMON_ATTR_DEFINE_H
#define {{UP_SRV_NAME}}_SRC_COMMON_ATTR_DEFINE_H

#include <Attr_API.h>

#define MONITOR_{{BIG_CMD}} 0	//{{BIG_CMD}}总请求
#define MONITOR_{{BIG_CMD}}_OK 0	//{{BIG_CMD}}请求成功
#define MONITOR_{{BIG_CMD}}_FAILED 0	//{{BIG_CMD}}请求失败
#define MONITOR_{{BIG_CMD}}_WRONG_BIG_CMD 0	
#define MONITOR_{{BIG_CMD}}_WRONG_SUBCMD 0
#define MONITOR_{{BIG_CMD}}_DECODE_REQ_FAILED 0	//encode请求失败
#define MONITOR_{{BIG_CMD}}_ENCODE_RSP_FAILED 0	//decode请求失败
#define MONITOR_{{BIG_CMD}}_SPAN_0_10 0	//{{BIG_CMD}}_SPAN_0_10
#define MONITOR_{{BIG_CMD}}_SPAN_10_20 0	//{{BIG_CMD}}_SPAN_10_20
#define MONITOR_{{BIG_CMD}}_SPAN_20_50 0	//{{BIG_CMD}}_SPAN_20_50
#define MONITOR_{{BIG_CMD}}_SPAN_50_100 0	//{{BIG_CMD}}_SPAN_50_100
#define MONITOR_{{BIG_CMD}}_SPAN_100_200 0	//{{BIG_CMD}}_SPAN_100_200
#define MONITOR_{{BIG_CMD}}_SPAN_200_500 0	//{{BIG_CMD}}_SPAN_200_500
#define MONITOR_{{BIG_CMD}}_SPAN_500_1000 0	//{{BIG_CMD}}_SPAN_500_1000
#define MONITOR_{{BIG_CMD}}_SPAN_1000_2000 0	//{{BIG_CMD}}_SPAN_1000_2000
#define MONITOR_{{BIG_CMD}}_SPAN_2000_5000 0	//{{BIG_CMD}}_SPAN_2000_5000
#define MONITOR_{{BIG_CMD}}_SPAN_MORE_5000 0	//{{BIG_CMD}}_SPAN_MORE_5000

{{#PROC_FUNC}}
#define MONITOR_{{SUB_CMD}}_ALL 0               //{{SUB_CMD}}总请求
#define MONITOR_{{SUB_CMD}}_SUCC 0              //{{SUB_CMD}}总成功
#define MONITOR_{{SUB_CMD}}_FAILED 0            //{{SUB_CMD}}总失败
#define MONITOR_{{SUB_CMD}} 0	                //{{SUB_CMD}}_SPAN_0_10
#define MONITOR_{{SUB_CMD}}_SPAN_10_20 0	    //{{SUB_CMD}}_SPAN_10_20
#define MONITOR_{{SUB_CMD}}_SPAN_20_50 0	    //{{SUB_CMD}}_SPAN_20_50
#define MONITOR_{{SUB_CMD}}_SPAN_50_100 0	    //{{SUB_CMD}}_SPAN_50_100
#define MONITOR_{{SUB_CMD}}_SPAN_100_200 0	    //{{SUB_CMD}}_SPAN_100_200
#define MONITOR_{{SUB_CMD}}_SPAN_200_500 0	    //{{SUB_CMD}}_SPAN_200_500
#define MONITOR_{{SUB_CMD}}_SPAN_500_1000 0	    //{{SUB_CMD}}_SPAN_500_1000
#define MONITOR_{{SUB_CMD}}_SPAN_1000_2000 0	//{{SUB_CMD}}_SPAN_1000_2000
#define MONITOR_{{SUB_CMD}}_SPAN_2000_5000 0	//{{SUB_CMD}}_SPAN_2000_5000
#define MONITOR_{{SUB_CMD}}_SPAN_MORE_5000 0	//{{SUB_CMD}}_SPAN_MORE_5000
{{/PROC_FUNC}}

#endif //{{UP_SRV_NAME}}_SRC_COMMON_ATTR_DEFINE_H
