/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#include <asn_internal.h>

#include "PlayerInfoReplyMessage.h"

static asn_TYPE_member_t asn_MBR_playerInfoResult_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct playerInfoResult, choice.playerInfoData),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PlayerInfoData,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerInfoData"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct playerInfoResult, choice.unknownPlayerInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UnknownPlayerInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"unknownPlayerInfo"
		},
};
static asn_TYPE_tag2member_t asn_MAP_playerInfoResult_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* playerInfoData at 184 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* unknownPlayerInfo at 186 */
};
static asn_CHOICE_specifics_t asn_SPC_playerInfoResult_specs_3 = {
	sizeof(struct playerInfoResult),
	offsetof(struct playerInfoResult, _asn_ctx),
	offsetof(struct playerInfoResult, present),
	sizeof(((struct playerInfoResult *)0)->present),
	asn_MAP_playerInfoResult_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_playerInfoResult_3 = {
	"playerInfoResult",
	"playerInfoResult",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_playerInfoResult_3,
	2,	/* Elements count */
	&asn_SPC_playerInfoResult_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PlayerInfoReplyMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PlayerInfoReplyMessage, playerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayerInfoReplyMessage, playerInfoResult),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_playerInfoResult_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerInfoResult"
		},
};
static ber_tlv_tag_t asn_DEF_PlayerInfoReplyMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PlayerInfoReplyMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* playerId at 182 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* playerInfoData at 184 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* unknownPlayerInfo at 186 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PlayerInfoReplyMessage_specs_1 = {
	sizeof(struct PlayerInfoReplyMessage),
	offsetof(struct PlayerInfoReplyMessage, _asn_ctx),
	asn_MAP_PlayerInfoReplyMessage_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PlayerInfoReplyMessage = {
	"PlayerInfoReplyMessage",
	"PlayerInfoReplyMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PlayerInfoReplyMessage_tags_1,
	sizeof(asn_DEF_PlayerInfoReplyMessage_tags_1)
		/sizeof(asn_DEF_PlayerInfoReplyMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_PlayerInfoReplyMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_PlayerInfoReplyMessage_tags_1)
		/sizeof(asn_DEF_PlayerInfoReplyMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_PlayerInfoReplyMessage_1,
	2,	/* Elements count */
	&asn_SPC_PlayerInfoReplyMessage_specs_1	/* Additional specs */
};
