/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Tue Mar 20 14:40:17 2018. */

#ifndef PB_DOWNLOAD_PB_H_INCLUDED
#define PB_DOWNLOAD_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _DownloadResp {
    int64_t state;
/* @@protoc_insertion_point(struct:DownloadResp) */
} DownloadResp;

/* Default values for struct fields */

/* Initializer values for message structs */
#define DownloadResp_init_default                {0}
#define DownloadResp_init_zero                   {0}

/* Field tags (for use in manual encoding/decoding) */
#define DownloadResp_state_tag                   1

/* Struct field encoding specification for nanopb */
extern const pb_field_t DownloadResp_fields[2];

/* Maximum encoded size of messages (where known) */
#define DownloadResp_size                        11

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define DOWNLOAD_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif