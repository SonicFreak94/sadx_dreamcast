
NJS_MATERIAL matlist_001E8530[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, MROBJTexName_mra_256s_eikaba, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001E8544[] = {
	3, 8, 9, 10,
	0x8000u | 5, 10, 11, 9, 2, 3,
	0x8000u | 6, 10, 12, 11, 6, 2, 0,
	6, 12, 14, 10, 4, 8, 5,
	0x8000u | 5, 15, 7, 1, 13, 16,
	0x8000u | 8, 15, 0, 7, 6, 13, 12, 16, 14
};

NJS_TEX uv_001E8594[] = {
	{ 176, 255 },
	{ 82, 248 },
	{ 181, 122 },
	{ 181, 122 },
	{ 82, 120 },
	{ 82, 248 },
	{ 4, 127 },
	{ 25, 235 },
	{ 181, 122 },
	{ 177, 17 },
	{ 82, 120 },
	{ 68, 30 },
	{ 4, 127 },
	{ 0, 35 },
	{ 177, 17 },
	{ 240, 20 },
	{ 181, 122 },
	{ 255, 136 },
	{ 176, 255 },
	{ 243, 230 },
	{ 49, -139 },
	{ 79, -139 },
	{ 65, -255 },
	{ 168, -130 },
	{ 201, -133 },
	{ 49, -139 },
	{ 0, 35 },
	{ 79, -139 },
	{ 68, 30 },
	{ 168, -130 },
	{ 177, 17 },
	{ 201, -133 },
	{ 240, 20 }
};

NJS_MESHSET_SADX meshlist_001E8618[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_001E8544, NULL, NULL, NULL, uv_001E8594, NULL }
};

NJS_VECTOR vertex_001E8630[] = {
	{ -17.71051f, 2.896637f, -51.83911f },
	{ 21.4357f, 225.3116f, -23.56146f },
	{ -13.97464f, -68.1661f, -49.73767f },
	{ -10.62015f, -150.9139f, -40.82861f },
	{ 18.40683f, -74.53671f, 58.18848f },
	{ -0.507874f, -146.7095f, 53.07653f },
	{ 3.346419f, 6.138967f, -22.29227f },
	{ 18.36365f, 136.7089f, -17.4848f },
	{ -0.391235f, -165.5388f, 24.21271f },
	{ -4.770203f, -160.6716f, -16.37463f },
	{ 20.16571f, -64.10069f, 26.38241f },
	{ 3.947133f, -62.78445f, -16.28288f },
	{ 14.1587f, 16.2505f, 24.57939f },
	{ 27.97459f, 129.7683f, 20.97393f },
	{ 11.55334f, 13.88632f, 51.73602f },
	{ 2.124146f, 136.7097f, -30.40723f },
	{ 35.17443f, 132.134f, 34.92511f }
};

NJS_VECTOR normal_001E86FC[] = {
	{ 0.8083529f, 0.013679f, -0.5885389f },
	{ 0.881209f, -0.078177f, -0.466218f },
	{ 0.921739f, -0.007358f, -0.387742f },
	{ 0.9679379f, -0.040835f, -0.247847f },
	{ 0.9934649f, -0.08868299f, 0.071854f },
	{ 0.978195f, -0.199473f, 0.057835f },
	{ 0.89323f, -0.002954f, -0.449591f },
	{ 0.8678899f, -0.066368f, -0.492302f },
	{ 0.983063f, -0.132597f, -0.126512f },
	{ 0.966855f, -0.06683899f, -0.246424f },
	{ 0.995445f, -0.021015f, -0.092989f },
	{ 0.941844f, -0.00572f, -0.336002f },
	{ 0.988609f, -0.058383f, -0.138723f },
	{ 0.954646f, -0.143414f, -0.260929f },
	{ 0.998985f, -0.04482f, 0.004447f },
	{ 0.698262f, -0.035851f, -0.714943f },
	{ 0.949025f, -0.182161f, -0.257232f }
};

NJS_MODEL_SADX attach_001E87C8 = { vertex_001E8630, normal_001E86FC, LengthOfArray(vertex_001E8630), meshlist_001E8618, matlist_001E8530, LengthOfArray(meshlist_001E8618), LengthOfArray(matlist_001E8530),{ 8.731963f, 29.8864f, 3.174683f }, 203.021f, NULL };

NJS_OBJECT object_001E87F0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001E87C8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };