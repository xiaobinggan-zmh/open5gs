/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_S1ap_E_RABList_H_
#define	_S1ap_E_RABList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolIE_Field;

/* S1ap-E-RABList */
typedef struct S1ap_E_RABList {
	A_SEQUENCE_OF(struct ProtocolIE_Field) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_E_RABList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolIE-Field.h"

#endif	/* _S1ap_E_RABList_H_ */
#include <asn_internal.h>
