/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9 at Tue Mar 20 14:40:18 2018. */

#include "SearchActionByPage.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t SearchActionByPageReq_fields[3] = {
    PB_FIELD(  1, INT64   , REQUIRED, STATIC  , FIRST, SearchActionByPageReq, page_size, page_size, 0),
    PB_FIELD(  2, INT64   , REQUIRED, STATIC  , OTHER, SearchActionByPageReq, page_num, page_size, 0),
    PB_LAST_FIELD
};

const pb_field_t SearchActionByPageResp_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, STATIC  , FIRST, SearchActionByPageResp, action_array, action_array, &SearchActionByPageResp_ObjAction_fields),
    PB_LAST_FIELD
};

const pb_field_t SearchActionByPageResp_ObjAction_fields[6] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, SearchActionByPageResp_ObjAction, action_id, action_id, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, SearchActionByPageResp_ObjAction, action_name, action_id, 0),
    PB_FIELD(  3, INT64   , REQUIRED, STATIC  , OTHER, SearchActionByPageResp_ObjAction, execute_order, action_name, 0),
    PB_FIELD(  4, INT64   , REQUIRED, STATIC  , OTHER, SearchActionByPageResp_ObjAction, execute_time, execute_order, 0),
    PB_FIELD(  5, STRING  , REQUIRED, STATIC  , OTHER, SearchActionByPageResp_ObjAction, arguments, execute_time, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(SearchActionByPageResp, action_array[0]) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_SearchActionByPageReq_SearchActionByPageResp_SearchActionByPageResp_ObjAction)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(SearchActionByPageResp, action_array[0]) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_SearchActionByPageReq_SearchActionByPageResp_SearchActionByPageResp_ObjAction)
#endif


/* @@protoc_insertion_point(eof) */
