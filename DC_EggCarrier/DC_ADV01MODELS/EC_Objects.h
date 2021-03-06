#include "stdafx.h"
#include "SADXModLoader.h"

/* NINJA Basic (with Sonic Adventure DX additions) model
*
* Generated by SAMDL
*
* Description: ___ADV01C_OBJECTS[7]
*
*/

enum EC_TARAITexName
{
	EC_TARAITexName_edc_k_jmedama,
	EC_TARAITexName_edv_k_traingarasu,
	EC_TARAITexName_edv_f_kagayab,
	EC_TARAITexName_edv_f_mojia,
	EC_TARAITexName_ecf_funa,
	EC_TARAITexName_edv_f_nana,
	EC_TARAITexName_era_s_intb,
	EC_TARAITexName_k_tuekabe,
	EC_TARAITexName_edv_f_wee,
	EC_TARAITexName_edv_f_good,
	EC_TARAITexName_edc_f_kemuri,
	EC_TARAITexName_mr_032o_kasan,
	EC_TARAITexName_edb_f_taraib,
	EC_TARAITexName_edv_f_kagaya,
	EC_TARAITexName_edv_f_mojie,
	EC_TARAITexName_edv_f_mojig,
	EC_TARAITexName_edv_f_mojim,
	EC_TARAITexName_edv_f_mojin
};

NJS_MATERIAL matlist_00111440[] = {
	{ { 0xFFF0000 },{ 0xFFFFFFFF }, 6, EC_TARAITexName_edv_f_mojia, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00111454[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_00111460[] = {
	{ 255, 0 },
	{ 255, 254 },
	{ 0 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_00111470[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00111454, NULL, NULL, NULL, uv_00111460, NULL }
};

NJS_VECTOR vertex_0011148C[] = {
	{ -6.639945f, -1, -5.457226f },
	{ -6.639945f, -1, 7.822663f },
	{ 6.639945f, -1, -5.457226f },
	{ 6.639945f, -1, 7.822663f }
};

NJS_VECTOR normal_001114BC[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_001114EC = { vertex_0011148C, normal_001114BC, LengthOfArray(vertex_0011148C), meshlist_00111470, matlist_00111440, LengthOfArray(meshlist_00111470), LengthOfArray(matlist_00111440),{ 0, 0, 0.182719f }, 9.390301f, NULL };

NJS_OBJECT object_00111518 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001114EC, 0, 2.028263f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0011154C[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, EC_TARAITexName_edv_f_kagayab, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC },
	{ { 0x7FB2FFB2 },{ 0xFFFFFFFF }, 11, EC_TARAITexName_edv_k_traingarasu, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_ONE },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EC_TARAITexName_edc_k_jmedama, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00111588[] = {
	4, 4, 10, 11, 9,
	0x8000u | 8, 4, 10, 3, 8, 2, 6, 5, 7,
	0x8000u | 7, 11, 4, 0, 3, 1, 2, 5,
	5, 6, 7, 8, 9, 10
};

Sint16 poly_001115C0[] = {
	0x8000u | 6, 21, 19, 23, 17, 14, 15
};

Sint16 poly_001115D0[] = {
	0x8000u | 14, 14, 13, 23, 22, 21, 20, 19, 18, 17, 16, 15, 12, 14, 13
};

NJS_TEX uv_001115F0[] = {
	{ 382, 255 },
	{ 127, 255 },
	{ 382, 255 },
	{ 127, 255 },
	{ 382, -255 },
	{ 127, -255 },
	{ 510, 0 },
	{ 0 },
	{ 382, 254 },
	{ 127, 254 },
	{ 127, 254 },
	{ 0 },
	{ 382, -255 },
	{ 382, -255 },
	{ 510, 0 },
	{ 510, 0 },
	{ 382, 254 },
	{ 382, 254 },
	{ 127, 254 },
	{ 127, 254 },
	{ 0 },
	{ 0 },
	{ 127, -255 },
	{ 127, -255 }
};

NJS_TEX uv_00111650[] = {
	{ 63, 0 },
	{ 0, 127 },
	{ 191, 0 },
	{ 63, 254 },
	{ 255, 127 },
	{ 191, 254 }
};

NJS_TEX uv_00111668[] = {
	{ 3315, 0 },
	{ 3315, 255 },
	{ 2805, 0 },
	{ 2805, 255 },
	{ 2295, 0 },
	{ 2295, 255 },
	{ 1785, 0 },
	{ 1785, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_001116A0[] = {
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001115D0, NULL, NULL, NULL, uv_00111668, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_001115C0, NULL, NULL, NULL, uv_00111650, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00111588, NULL, NULL, NULL, uv_001115F0, NULL }
};

NJS_VECTOR vertex_001116F8[] = {
	{ 11.2f, 1.217862f, 0 },
	{ 5.599999f, 1.217862f, -9.699486f },
	{ 5.599999f, 2.925f, -9.699486f },
	{ 11.2f, 2.925f, 0 },
	{ 5.600003f, 2.925f, 9.699486f },
	{ -5.600001f, 1.217862f, -9.699484f },
	{ -5.600001f, 2.925f, -9.699484f },
	{ -11.2f, 1.217862f, 0 },
	{ -11.2f, 2.925f, 0 },
	{ -5.599998f, 1.217862f, 9.699486f },
	{ -5.599998f, 2.925f, 9.699486f },
	{ 5.600003f, 1.217862f, 9.699486f },
	{ 5.6f, -2.925f, -9.69949f },
	{ 11.2f, -2.925f, 0 },
	{ 11.2f, 1.217862f, 0 },
	{ 5.599999f, 1.217862f, -9.699486f },
	{ -5.600001f, -2.925f, -9.699484f },
	{ -5.600001f, 1.217862f, -9.699484f },
	{ -11.2f, -2.925f, 0 },
	{ -11.2f, 1.217862f, 0 },
	{ -5.599998f, -2.925f, 9.699486f },
	{ -5.599998f, 1.217862f, 9.699486f },
	{ 5.600003f, -2.925f, 9.699486f },
	{ 5.600003f, 1.217862f, 9.699486f }
};

NJS_VECTOR normal_00111818[] = {
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.396203f, 0.609994f, -0.686244f },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.396203f, 0.609994f, 0.686243f },
	{ -0.5f, 0, -0.866025f },
	{ -0.396203f, 0.609994f, -0.686244f },
	{ -1, 0, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.5f, 0, 0.866025f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0.000001f, -0.866026f },
	{ 1, 0, 0 },
	{ 0.792406f, 0.609994f, 0 },
	{ 0.396203f, 0.609994f, -0.686243f },
	{ -0.5f, 0.000001f, -0.866025f },
	{ -0.396203f, 0.609995f, -0.686243f },
	{ -1, 0, 0 },
	{ -0.792406f, 0.609994f, 0 },
	{ -0.5f, 0, 0.866025f },
	{ -0.396203f, 0.609994f, 0.686244f },
	{ 0.5f, 0, 0.866025f },
	{ 0.396203f, 0.609994f, 0.686243f }
};

NJS_MODEL_SADX attach_00111938 = { vertex_001116F8, normal_00111818, LengthOfArray(vertex_001116F8), meshlist_001116A0, matlist_0011154C, LengthOfArray(meshlist_001116A0), LengthOfArray(matlist_0011154C),{ 0, 0, -0.00002f }, 14.81621f, NULL };

NJS_OBJECT object_00111964 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00111938, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00111518, NULL };

//Door barrier

NJS_MATERIAL matlist_000FB25C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xBFB2B2B2 },{ 0xFFFFFFFF }, 11, 48, NJD_D_100 | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};
/*
{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, OBJ_EC30TexName_edc_k_jsen, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_EC30TexName_edc_k_jsen, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
{ { 0xBFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_EC30TexName_edv_k_traingarasu, NJD_D_100 | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};*/
Sint16 poly_000FB298[] = {
	0x8000u | 5, 1, 0, 3, 19, 18,
	3, 1, 2, 3
};

Sint16 poly_000FB2AC[] = {
	4, 6, 7, 5, 4,
	4, 10, 11, 9, 8,
	4, 22, 10, 7, 9,
	4, 23, 22, 6, 7,
	4, 20, 13, 8, 9,
	4, 7, 9, 4, 13
};

Sint16 poly_000FB2E8[] = {
	3, 18, 21, 25,
	0x8000u | 7, 19, 23, 24, 15, 25, 14, 21,
	0x8000u | 5, 26, 17, 12, 16, 19,
	0x8000u | 7, 19, 24, 12, 25, 26, 18, 17
};

NJS_TEX uv_000FB31C[] = {
	{ 5, 253 },
	{ 5, 127 },
	{ 759, 127 },
	{ 5, 253 },
	{ 759, 253 },
	{ 5, 253 },
	{ 759, 253 },
	{ 759, 127 }
};

NJS_TEX uv_000FB340[] = {
	{ 249, 127 },
	{ 1, 127 },
	{ 249, 253 },
	{ 1, 253 },
	{ 249, 127 },
	{ 1, 127 },
	{ 249, 253 },
	{ 1, 253 },
	{ 249, 127 },
	{ 1, 127 },
	{ 249, 253 },
	{ 1, 253 },
	{ 249, 127 },
	{ 1, 127 },
	{ 249, 253 },
	{ 1, 253 },
	{ 1, 253 },
	{ 249, 253 },
	{ 1, 127 },
	{ 249, 127 },
	{ 249, 127 },
	{ 1, 127 },
	{ 249, 253 },
	{ 1, 253 }
};

NJS_TEX uv_000FB3A0[] = {
	{ 1293, -106 },
	{ 1293, -570 },
	{ 1223, -648 },
	{ 621, -106 },
	{ 621, -570 },
	{ 697, -648 },
	{ 622, -870 },
	{ 1223, -648 },
	{ 1292, -870 },
	{ 1293, -570 },
	{ 1223, -18 },
	{ 1292, 105 },
	{ 697, -18 },
	{ 622, 105 },
	{ 621, -106 },
	{ 621, -106 },
	{ 697, -648 },
	{ 697, -18 },
	{ 1223, -648 },
	{ 1223, -18 },
	{ 1293, -106 },
	{ 1292, 105 }
};

NJS_MESHSET_SADX meshlist_000FB3F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000FB298, NULL, NULL, NULL, uv_000FB31C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_000FB2AC, NULL, NULL, NULL, uv_000FB340, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_000FB2E8, NULL, NULL, NULL, uv_000FB3A0, NULL }
};

NJS_VECTOR vertex_000FB450[] = {
	{ -16, -18, -0.5f },
	{ -16, -20, -0.5f },
	{ 16, -20, -0.5f },
	{ 16, -18, -0.5f },
	{ -5, 10, -1.75f },
	{ -16, 5, -1.75f },
	{ -16, 3, -0.5f },
	{ -5, 8, -0.5f },
	{ 16, 3, -0.5f },
	{ 5, 8, -0.5f },
	{ 5, 8, -1.75f },
	{ 16, 3, -1.75f },
	{ -5, -11.5f, 1.125f },
	{ 5, 10, -1.75f },
	{ 5, 8, -0.75f },
	{ -5, 8, -0.75f },
	{ -5, -18, -0.75f },
	{ 5, -18, -0.75f },
	{ 16, -18, -1.75f },
	{ -16, -18, -1.75f },
	{ 16, 5, -1.75f },
	{ 16, 3, -1.75f },
	{ -5, 8, -1.75f },
	{ -16, 3, -1.75f },
	{ -5, -1, 1.125f },
	{ 5, -1, 1.125f },
	{ 5, -11.5f, 1.125f }
};

NJS_VECTOR normal_000FB598[] = {
	{ 0, 0.707107f, 0.707107f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.707107f, 0.707107f },
	{ -0.102723f, 0.527195f, 0.843512f },
	{ -0.234208f, 0.515258f, 0.824412f },
	{ 0.274276f, -0.603408f, 0.74878f },
	{ 0.062783f, -0.37206f, 0.926083f },
	{ -0.274276f, -0.603408f, 0.74878f },
	{ -0.062783f, -0.37206f, 0.926083f },
	{ -0.2117f, -0.977335f, 0 },
	{ -0.413803f, -0.910366f, 0 },
	{ -0.100377f, -0.116106f, 0.988152f },
	{ 0.102723f, 0.527195f, 0.843512f },
	{ 0.076752f, 0.203353f, 0.976093f },
	{ -0.076752f, 0.203353f, 0.976093f },
	{ -0.043895f, -0.276893f, 0.959898f },
	{ 0.043895f, -0.276893f, 0.959898f },
	{ 0.147948f, 0.671455f, 0.726127f },
	{ -0.147948f, 0.671455f, 0.726127f },
	{ 0.234208f, 0.515258f, 0.824412f },
	{ 0.225378f, 0.078207f, 0.971127f },
	{ 0.2117f, -0.977335f, 0 },
	{ 0.085267f, -0.546f, 0.833435f },
	{ -0.112759f, 0.090638f, 0.98948f },
	{ 0.112759f, 0.090638f, 0.98948f },
	{ 0.100377f, -0.116106f, 0.988152f }
};

NJS_MODEL_SADX attach_000FB6DC = { vertex_000FB450, normal_000FB598, LengthOfArray(vertex_000FB450), meshlist_000FB3F8, matlist_000FB25C, LengthOfArray(meshlist_000FB3F8), LengthOfArray(matlist_000FB25C),{ 0, -5, -0.3125f }, 16.06445f, NULL };

NJS_OBJECT Barrier_HotShelter = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000FB6DC, 0, 20.1f, 247, 0, 0x8000, 0, 0x1, 1, 1, NULL, NULL };
NJS_OBJECT Barrier_E101Room = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000FB6DC, 62, 20.1f, 192, 0, 0xA000, 0, 0x1, 1, 1, NULL, NULL };
NJS_OBJECT Barrier_Prison = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000FB6DC, -62, 20.1f, 192, 0, 0x6000, 0, 0x2, 1, 1, NULL, NULL };
NJS_OBJECT Barrier_AmmunitionRoom = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000FB6DC, 187, 100.1f, -0.5f, 0, 0xC000, 0, 0x2, 1, 1, NULL, NULL };
NJS_OBJECT Barrier_ReservoirRoom = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000FB6DC, -187, 100.1f, -280, 0, 0x4000, 0, 0x2, 1, 1, NULL, NULL };
