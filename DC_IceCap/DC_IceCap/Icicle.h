#include "stdafx.h"
#include "SADXModLoader.h"

enum OBJ_ICECAPTexName
{
	OBJ_ICECAPTexName_alphakori,
	OBJ_ICECAPTexName_alpha2kori,
	OBJ_ICECAPTexName_ice04,
	OBJ_ICECAPTexName_mizukori,
	OBJ_ICECAPTexName_cpiwa02,
	OBJ_ICECAPTexName_cpiwa_a,
	OBJ_ICECAPTexName_cp01,
	OBJ_ICECAPTexName_cpiwa07,
	OBJ_ICECAPTexName_cpiwa08,
	OBJ_ICECAPTexName_cpk_tunagi,
	OBJ_ICECAPTexName_map_iwagake2,
	OBJ_ICECAPTexName_map_iwagake3,
	OBJ_ICECAPTexName_balloon,
	OBJ_ICECAPTexName_ball_kago,
	OBJ_ICECAPTexName_balloon05,
	OBJ_ICECAPTexName_doa,
	OBJ_ICECAPTexName_ken32_jt03a,
	OBJ_ICECAPTexName_ken16_jt02a,
	OBJ_ICECAPTexName_ken08_jt01a,
	OBJ_ICECAPTexName_ken32_jt04a,
	OBJ_ICECAPTexName_ken32_jt05a,
	OBJ_ICECAPTexName_ken64_jt06a,
	OBJ_ICECAPTexName_ken64_jt07a,
	OBJ_ICECAPTexName_ken64_jt08a,
	OBJ_ICECAPTexName_ken64_jt09a,
	OBJ_ICECAPTexName_ken64_jt10a,
	OBJ_ICECAPTexName_ken64_jt11a,
	OBJ_ICECAPTexName_s_kanban,
	OBJ_ICECAPTexName_s_ita,
	OBJ_ICECAPTexName_ken32_bm01a,
	OBJ_ICECAPTexName_ken64_bm02a,
	OBJ_ICECAPTexName_snb05_ken128,
	OBJ_ICECAPTexName_snb14_ken128,
	OBJ_ICECAPTexName_kusari01,
	OBJ_ICECAPTexName_kusari02,
	OBJ_ICECAPTexName_bic_iwa2,
	OBJ_ICECAPTexName_bic_iwa,
	OBJ_ICECAPTexName_obj_turara,
	OBJ_ICECAPTexName_cpk01,
	OBJ_ICECAPTexName_house_03,
	OBJ_ICECAPTexName_house_01,
	OBJ_ICECAPTexName_house_04,
	OBJ_ICECAPTexName_sn_snow01,
	OBJ_ICECAPTexName_snowbox,
	OBJ_ICECAPTexName_hasi_sita,
	OBJ_ICECAPTexName_hasi_ue,
	OBJ_ICECAPTexName_alpha_turara,
	OBJ_ICECAPTexName_hasira,
	OBJ_ICECAPTexName_atama_a,
	OBJ_ICECAPTexName_house_01a,
	OBJ_ICECAPTexName_house_02,
	OBJ_ICECAPTexName_house_06,
	OBJ_ICECAPTexName_house_06a,
	OBJ_ICECAPTexName_house_07,
	OBJ_ICECAPTexName_house_08,
	OBJ_ICECAPTexName_house_08a,
	OBJ_ICECAPTexName_house_05,
	OBJ_ICECAPTexName_house_05a,
	OBJ_ICECAPTexName_sb_suis_yuki,
	OBJ_ICECAPTexName_cp_brake_ice,
	OBJ_ICECAPTexName_ice03,
	OBJ_ICECAPTexName_ken64_saku01,
	OBJ_ICECAPTexName_ken64_jpdi02,
	OBJ_ICECAPTexName_ken64_jpdi01,
	OBJ_ICECAPTexName_ken64_jpdi03,
	OBJ_ICECAPTexName_ken64_jpdi04,
	OBJ_ICECAPTexName_ken128_tree02,
	OBJ_ICECAPTexName_ken128_tree01,
	OBJ_ICECAPTexName_map_gake2,
	OBJ_ICECAPTexName_map_gake,
	OBJ_ICECAPTexName_map_gake3,
	OBJ_ICECAPTexName_sn_iwa2,
	OBJ_ICECAPTexName_sn_siwa01,
	OBJ_ICECAPTexName_sn_siwa02,
	OBJ_ICECAPTexName_sn_snow64,
	OBJ_ICECAPTexName_snb06_ken128,
	OBJ_ICECAPTexName_snb12_ken128,
	OBJ_ICECAPTexName_cp_kusa,
	OBJ_ICECAPTexName_cp_kusa02,
	OBJ_ICECAPTexName_ken64_mta03,
	OBJ_ICECAPTexName_ken64_mta02,
	OBJ_ICECAPTexName_ken64_mta01,
	OBJ_ICECAPTexName_ken64_mta04,
	OBJ_ICECAPTexName_mizukori2,
	OBJ_ICECAPTexName_cpwf,
	OBJ_ICECAPTexName_cpwk04,
	OBJ_ICECAPTexName_nada04,
	OBJ_ICECAPTexName_sb_suis_b,
	OBJ_ICECAPTexName_suisu_ji,
	OBJ_ICECAPTexName_cp_suisyou01,
	OBJ_ICECAPTexName_sb_suis_yuki2,
	OBJ_ICECAPTexName_map_turo3,
	OBJ_ICECAPTexName_map_turo1,
	OBJ_ICECAPTexName_ken128_tree04,
	OBJ_ICECAPTexName_ken64_gate12,
	OBJ_ICECAPTexName_ken64_gate08,
	OBJ_ICECAPTexName_snow_sprite,
	OBJ_ICECAPTexName_kira_b,
	OBJ_ICECAPTexName_kira_a,
	OBJ_ICECAPTexName_yuki_moto
};


NJS_MATERIAL matlist_0016186C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_ICECAPTexName_snb14_ken128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00161880[] = {
	0x8000u | 15, 2, 7, 5, 22, 18, 21, 17, 49, 44, 48, 43, 47, 42, 46, 41,
	0x8000u | 11, 10, 12, 11, 31, 32, 29, 30, 27, 28, 26, 25,
	0x8000u | 5, 13, 1, 3, 2, 4,
	0x8000u | 5, 15, 13, 16, 3, 4,
	14, 0, 6, 9, 19, 14, 20, 33, 45, 34, 50, 35, 51, 40, 52,
	0x8000u | 9, 12, 39, 31, 38, 29, 37, 27, 36, 26,
	13, 40, 25, 35, 28, 34, 30, 33, 32, 14, 11, 9, 10, 0,
	0x8000u | 7, 39, 43, 38, 42, 37, 41, 36,
	24, 43, 44, 39, 15, 12, 13, 10, 1, 0, 2, 6, 8, 19, 24, 20, 23, 45, 56, 50, 55, 51, 54, 52, 53,
	0x8000u | 8, 44, 15, 17, 16, 18, 4, 5, 2,
	15, 46, 53, 47, 54, 48, 55, 49, 56, 21, 23, 22, 24, 7, 8, 2
};

NJS_TEX uv_00161994[] = {
	{ 176, 255 },
	{ 234, 189 },
	{ 268, 190 },
	{ 242, 155 },
	{ 261, 153 },
	{ 241, 127 },
	{ 274, 128 },
	{ 236, 89 },
	{ 270, 87 },
	{ 236, 65 },
	{ 268, 63 },
	{ 240, 22 },
	{ 268, 21 },
	{ 244, 1 },
	{ 275, 2 },
	{ 127, 154 },
	{ 88, 128 },
	{ 116, 126 },
	{ 84, 85 },
	{ 117, 87 },
	{ 83, 66 },
	{ 117, 66 },
	{ 82, 22 },
	{ 121, 22 },
	{ 88, 3 },
	{ 120, 3 },
	{ 96, 155 },
	{ 116, 192 },
	{ 102, 191 },
	{ 176, 255 },
	{ 69, 192 },
	{ 53, 132 },
	{ 96, 155 },
	{ 56, 155 },
	{ 102, 191 },
	{ 69, 192 },
	{ 142, 190 },
	{ 190, 191 },
	{ 154, 153 },
	{ 176, 152 },
	{ 159, 127 },
	{ 175, 130 },
	{ 149, 87 },
	{ 178, 88 },
	{ 149, 66 },
	{ 180, 66 },
	{ 150, 23 },
	{ 179, 22 },
	{ 151, 4 },
	{ 182, 3 },
	{ 88, 128 },
	{ 55, 88 },
	{ 84, 85 },
	{ 55, 66 },
	{ 83, 66 },
	{ 56, 22 },
	{ 82, 22 },
	{ 53, 2 },
	{ 88, 3 },
	{ 151, 4 },
	{ 120, 3 },
	{ 150, 23 },
	{ 121, 22 },
	{ 149, 66 },
	{ 117, 66 },
	{ 149, 87 },
	{ 117, 87 },
	{ 159, 127 },
	{ 116, 126 },
	{ 154, 153 },
	{ 127, 154 },
	{ 142, 190 },
	{ 55, 88 },
	{ 15, 63 },
	{ 55, 66 },
	{ 15, 21 },
	{ 56, 22 },
	{ 22, 2 },
	{ 53, 2 },
	{ 15, 63 },
	{ 17, 87 },
	{ 55, 88 },
	{ 53, 132 },
	{ 88, 128 },
	{ 96, 155 },
	{ 127, 154 },
	{ 116, 192 },
	{ 142, 190 },
	{ 176, 255 },
	{ 190, 191 },
	{ 205, 192 },
	{ 176, 152 },
	{ 210, 154 },
	{ 175, 130 },
	{ 203, 126 },
	{ 178, 88 },
	{ 206, 90 },
	{ 180, 66 },
	{ 211, 64 },
	{ 179, 22 },
	{ 207, 21 },
	{ 182, 3 },
	{ 212, 1 },
	{ 17, 87 },
	{ 53, 132 },
	{ 21, 128 },
	{ 56, 155 },
	{ 8, 153 },
	{ 69, 192 },
	{ 15, 190 },
	{ 176, 255 },
	{ 244, 1 },
	{ 212, 1 },
	{ 240, 22 },
	{ 207, 21 },
	{ 236, 65 },
	{ 211, 64 },
	{ 236, 89 },
	{ 206, 90 },
	{ 241, 127 },
	{ 203, 126 },
	{ 242, 155 },
	{ 210, 154 },
	{ 234, 189 },
	{ 205, 192 },
	{ 176, 255 }
};

NJS_MESHSET_SADX meshlist_00161B8C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 11, poly_00161880, NULL, NULL, NULL, uv_00161994, NULL }
};

NJS_VECTOR vertex_00161BA4[] = {
	{ 1.041059f, -18.28169f, -0.504667f },
	{ 0.949851f, -18.42717f, 0.264772f },
	{ 0.022959f, -23.53143f, 0.139586f },
	{ 1.028674f, -18.29879f, 0.651028f },
	{ 0.228981f, -18.44913f, 0.77314f },
	{ -0.328865f, -18.18736f, 0.486833f },
	{ -0.285306f, -18.32066f, -0.9532959f },
	{ -1.257225f, -18.1845f, -0.069217f },
	{ -0.768135f, -18.41207f, -0.864987f },
	{ 1.183437f, -14.58375f, -1.281919f },
	{ 1.897801f, -14.67674f, -0.234305f },
	{ 2.146331f, -12.03252f, 0.287924f },
	{ 1.352097f, -12.15853f, 1.400345f },
	{ 1.42685f, -14.80278f, 1.060706f },
	{ 0.992146f, -12.10879f, -1.467254f },
	{ -0.008471999f, -12.54331f, 1.636003f },
	{ 0.069082f, -14.51772f, 1.665453f },
	{ -1.256565f, -12.20463f, 1.432016f },
	{ -1.222048f, -14.57261f, 0.832851f },
	{ 0.193845f, -14.55527f, -1.552211f },
	{ 0.278536f, -12.41531f, -1.649445f },
	{ -2.079023f, -12.09881f, 0.122941f },
	{ -1.715067f, -14.54946f, 0.16276f },
	{ -1.010257f, -11.98013f, -1.365297f },
	{ -1.181671f, -14.69541f, -1.031548f },
	{ 5.057796f, 0.01432f, -0.203402f },
	{ 3.435843f, 0.036729f, 3.287726f },
	{ 2.040272f, -1.846406f, 2.576421f },
	{ 3.501398f, -1.845887f, -0.135819f },
	{ 1.809051f, -6.093214f, 2.289134f },
	{ 2.731102f, -6.117178f, -0.494622f },
	{ 1.729966f, -8.069172f, 1.704347f },
	{ 2.406348f, -8.140174f, -0.268265f },
	{ 2.202114f, -8.236736f, -1.517625f },
	{ 2.391989f, -6.134355f, -2.155448f },
	{ 2.530835f, -1.884326f, -2.484575f },
	{ -0.028887f, 0.093482f, 5.220365f },
	{ 0.207895f, -1.835752f, 3.178519f },
	{ 0.075748f, -6.152315f, 2.763086f },
	{ 0.100476f, -8.274432f, 2.640733f },
	{ 3.41692f, -0.056012f, -3.518489f },
	{ -3.28407f, 0.09155899f, 3.509079f },
	{ -3.073762f, -1.765495f, 2.370121f },
	{ -2.206882f, -5.79668f, 1.767215f },
	{ -1.877318f, -8.193851f, 1.711068f },
	{ 0.147086f, -8.260026f, -2.581856f },
	{ -5.149632f, 0.172155f, 0.307843f },
	{ -3.297822f, -1.853218f, -0.06633499f },
	{ -2.650401f, -6.068867f, -0.255715f },
	{ -2.496323f, -8.066487f, 0.218088f },
	{ 0.044856f, -6.099247f, -2.969524f },
	{ 0.149672f, -1.873599f, -3.482239f },
	{ -0.172314f, 0.003922f, -4.655887f },
	{ -3.609431f, 0.172611f, -3.412603f },
	{ -2.138219f, -1.776003f, -2.421565f },
	{ -2.129925f, -5.959974f, -1.930153f },
	{ -1.58819f, -8.441422f, -1.894624f }
};

NJS_VECTOR normal_00161E50[] = {
	{ 0.755679f, -0.170829f, -0.632271f },
	{ 0.986776f, -0.156766f, -0.041189f },
	{ 0.000189f, -0.999245f, 0.038864f },
	{ 0.7494389f, -0.195021f, 0.632699f },
	{ -0.137971f, -0.136407f, 0.980998f },
	{ -0.541823f, -0.155478f, 0.825987f },
	{ 0.022047f, -0.14816f, -0.988718f },
	{ -0.962387f, -0.185604f, 0.198399f },
	{ -0.596461f, -0.15077f, -0.788355f },
	{ 0.634008f, -0.082509f, -0.768912f },
	{ 0.992624f, -0.079478f, -0.091546f },
	{ 0.9961759f, -0.079555f, 0.036108f },
	{ 0.656231f, -0.036759f, 0.753664f },
	{ 0.694137f, -0.109027f, 0.711539f },
	{ 0.627398f, -0.137843f, -0.766401f },
	{ -0.029544f, -0.136238f, 0.990235f },
	{ -0.08167399f, -0.144016f, 0.986199f },
	{ -0.629795f, -0.191726f, 0.752728f },
	{ -0.623357f, -0.197538f, 0.756574f },
	{ -0.001081f, -0.09049799f, -0.995896f },
	{ 0.020178f, -0.10631f, -0.994128f },
	{ -0.994173f, -0.107403f, -0.009167f },
	{ -0.985491f, -0.130293f, 0.108769f },
	{ -0.615802f, -0.09592099f, -0.78204f },
	{ -0.649877f, -0.055394f, -0.758018f },
	{ 0.746859f, -0.664907f, 0.010022f },
	{ 0.5389259f, -0.674875f, 0.5040849f },
	{ 0.58868f, -0.463858f, 0.662035f },
	{ 0.891466f, -0.451165f, 0.041688f },
	{ 0.675171f, -0.124666f, 0.7270499f },
	{ 0.9885949f, -0.144925f, 0.040956f },
	{ 0.727421f, -0.079834f, 0.681531f },
	{ 0.986017f, -0.160306f, 0.045514f },
	{ 0.755031f, -0.258977f, -0.602378f },
	{ 0.72984f, -0.181703f, -0.659028f },
	{ 0.640306f, -0.404102f, -0.65323f },
	{ -0.024554f, -0.625541f, 0.7798049f },
	{ 0.007715f, -0.395593f, 0.918394f },
	{ -0.020362f, -0.077294f, 0.9967999f },
	{ 0.004294f, -0.117997f, 0.993005f },
	{ 0.523571f, -0.625383f, -0.5785919f },
	{ -0.492434f, -0.620236f, 0.6105869f },
	{ -0.658518f, -0.474832f, 0.583856f },
	{ -0.752459f, -0.119935f, 0.647627f },
	{ -0.70653f, -0.123711f, 0.696786f },
	{ 0.021738f, -0.233963f, -0.972002f },
	{ -0.712374f, -0.701733f, -0.009701f },
	{ -0.874642f, -0.476276f, -0.09034199f },
	{ -0.9838589f, -0.15149f, -0.095253f },
	{ -0.992943f, -0.118374f, 0.007199f },
	{ -0.034798f, -0.189683f, -0.9812289f },
	{ -0.023086f, -0.385677f, -0.922345f },
	{ -0.068991f, -0.5803879f, -0.811412f },
	{ -0.55094f, -0.639802f, -0.5358329f },
	{ -0.624504f, -0.41672f, -0.66056f },
	{ -0.733484f, -0.163375f, -0.65978f },
	{ -0.664748f, -0.174376f, -0.726431f }
};

NJS_MODEL_SADX attach_001620FC = { vertex_00161BA4, normal_00161E50, LengthOfArray(vertex_00161BA4), meshlist_00161B8C, matlist_0016186C, LengthOfArray(meshlist_00161B8C), LengthOfArray(matlist_0016186C),{ -0.045918f, -12.17941f, 0.282239f }, 13.30254f, NULL };

NJS_OBJECT object_00162124 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001620FC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00162158[] = {
	{ { 0x99B2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0016216C[] = {
	0x8000u | 9, 0, 9, 4, 8, 3, 7, 2, 6, 1,
	0x8000u | 7, 30, 3, 20, 2, 10, 1, 15,
	0x8000u | 9, 0, 14, 9, 13, 8, 12, 7, 11, 6,
	12, 11, 16, 12, 17, 13, 18, 14, 19, 0, 24, 29, 28,
	8, 31, 15, 32, 10, 25, 20, 5, 30,
	0x8000u | 6, 27, 26, 22, 21, 17, 16,
	0x8000u | 6, 28, 27, 23, 22, 18, 17,
	5, 28, 24, 23, 19, 18,
	12, 26, 31, 27, 32, 28, 25, 29, 5, 0, 30, 4, 3
};

NJS_TEX uv_00162214[] = {
	{ 355, 255 },
	{ 235, 153 },
	{ 274, 153 },
	{ 229, 87 },
	{ 272, 87 },
	{ 231, 22 },
	{ 270, 22 },
	{ 235, 1 },
	{ 273, 1 },
	{ 53, 153 },
	{ 19, 87 },
	{ 50, 87 },
	{ 17, 22 },
	{ 49, 22 },
	{ 20, 1 },
	{ 48, 1 },
	{ 102, 255 },
	{ 194, 153 },
	{ 235, 153 },
	{ 197, 87 },
	{ 229, 87 },
	{ 198, 22 },
	{ 231, 22 },
	{ 199, 1 },
	{ 235, 1 },
	{ 199, 1 },
	{ 168, 1 },
	{ 198, 22 },
	{ 165, 22 },
	{ 197, 87 },
	{ 163, 87 },
	{ 194, 153 },
	{ 153, 153 },
	{ 102, 255 },
	{ 131, 153 },
	{ 106, 153 },
	{ 102, 87 },
	{ 78, 1 },
	{ 48, 1 },
	{ 78, 22 },
	{ 49, 22 },
	{ 79, 87 },
	{ 50, 87 },
	{ 81, 153 },
	{ 53, 153 },
	{ 103, 22 },
	{ 102, 1 },
	{ 134, 22 },
	{ 137, 1 },
	{ 165, 22 },
	{ 168, 1 },
	{ 102, 87 },
	{ 103, 22 },
	{ 133, 87 },
	{ 134, 22 },
	{ 163, 87 },
	{ 165, 22 },
	{ 102, 87 },
	{ 131, 153 },
	{ 133, 87 },
	{ 153, 153 },
	{ 163, 87 },
	{ 102, 1 },
	{ 78, 1 },
	{ 103, 22 },
	{ 78, 22 },
	{ 102, 87 },
	{ 79, 87 },
	{ 106, 153 },
	{ 81, 153 },
	{ 102, 255 },
	{ 53, 153 },
	{ 21, 153 },
	{ 19, 87 }
};

NJS_MESHSET_SADX meshlist_0016233C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_0016216C, NULL, NULL, NULL, uv_00162214, NULL }
};

NJS_VECTOR vertex_00162354[] = {
	{ 0, -24.96666f, -0.00001f },
	{ 5.85f, 0.033332f, -0.749999f },
	{ 3.669948f, -1.966668f, 0 },
	{ 2.615f, -8.416668f, 0 },
	{ 2, -14.96667f, -0.00001f },
	{ 0, -14.96667f, -2 },
	{ 3.739087f, 0.033332f, 3.489088f },
	{ 2.480567f, -1.966668f, 2.871419f },
	{ 1.73632f, -8.416668f, 2.12132f },
	{ 1.414214f, -14.96667f, 1.414213f },
	{ 2.871419f, -1.966668f, -2.871418f },
	{ 0, 0.033332f, 5.850001f },
	{ 0, -1.966668f, 4.0608f },
	{ 0, -8.416668f, 3 },
	{ 0.095f, -14.96667f, 1.6f },
	{ 4.339087f, 0.033332f, -4.539087f },
	{ -3.239088f, 0.033332f, 3.589088f },
	{ -2.871419f, -1.966668f, 2.871419f },
	{ -2.12132f, -8.416668f, 2.12132f },
	{ -1.319214f, -14.96667f, 1.014213f },
	{ 2.12132f, -8.416668f, -2.12132f },
	{ -5.199999f, 0.033332f, 0.150001f },
	{ -3.593807f, -1.966668f, 0 },
	{ -2.54f, -8.416668f, 0 },
	{ -2, -14.96667f, -0.00001f },
	{ 0, -8.416668f, -3 },
	{ -3.889086f, 0.033332f, -5.039087f },
	{ -2.404427f, -1.966668f, -2.871418f },
	{ -1.66132f, -8.416668f, -2.12132f },
	{ -1.414213f, -14.96667f, -1.414214f },
	{ 1.414213f, -14.96667f, -1.414214f },
	{ 0, 0.033332f, -4.849998f },
	{ 0, -1.966668f, -4.060799f }
};

NJS_VECTOR normal_001624E0[] = {
	{ -0.005434f, -0.999882f, 0.014354f },
	{ 0.698845f, -0.715242f, 0.00666f },
	{ 0.8801759f, -0.464656f, 0.09688f },
	{ 0.989967f, -0.128246f, 0.059308f },
	{ 0.989444f, -0.142724f, 0.025096f },
	{ -0.013297f, -0.172728f, -0.98488f },
	{ 0.604539f, -0.6100219f, 0.512256f },
	{ 0.656945f, -0.42085f, 0.625547f },
	{ 0.697786f, -0.156421f, 0.699019f },
	{ 0.649662f, -0.172292f, 0.740443f },
	{ 0.5948229f, -0.54858f, -0.587576f },
	{ -0.030584f, -0.552599f, 0.832886f },
	{ -0.003682f, -0.383884f, 0.923374f },
	{ 0.001175f, -0.185066f, 0.982725f },
	{ -0.074658f, -0.183207f, 0.980235f },
	{ 0.420571f, -0.773007f, -0.474953f },
	{ -0.610443f, -0.50564f, 0.609662f },
	{ -0.698131f, -0.374005f, 0.610518f },
	{ -0.73444f, -0.163532f, 0.658677f },
	{ -0.678408f, -0.155854f, 0.717964f },
	{ 0.739862f, -0.14973f, -0.655886f },
	{ -0.722893f, -0.6892329f, 0.048816f },
	{ -0.8829769f, -0.469108f, -0.017024f },
	{ -0.990797f, -0.122816f, -0.056903f },
	{ -0.990389f, -0.135238f, 0.028984f },
	{ -0.032465f, -0.156747f, -0.987105f },
	{ -0.453783f, -0.609072f, -0.650471f },
	{ -0.620209f, -0.425886f, -0.658758f },
	{ -0.719728f, -0.136434f, -0.680719f },
	{ -0.71255f, -0.15295f, -0.684747f },
	{ 0.7156529f, -0.160386f, -0.679792f },
	{ -0.001986f, -0.543291f, -0.839542f },
	{ -0.017545f, -0.380371f, -0.924668f }
};

NJS_MODEL_SADX attach_0016266C = { vertex_00162354, normal_001624E0, LengthOfArray(vertex_00162354), meshlist_0016233C, matlist_00162158, LengthOfArray(meshlist_0016233C), LengthOfArray(matlist_00162158),{ 0.325001f, -12.46666f, 0.405457f }, 13.63426f, NULL };

NJS_OBJECT object_00162694 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0016266C, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00162124, NULL };