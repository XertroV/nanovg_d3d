#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
// Parameters:
//
//   float4 extent;
//   sampler2D g_sampler;
//   float4 innerCol;
//   float4 outerCol;
//   float4x4 paintMat;
//   float4 strokeMult;
//   float2 type;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   paintMat     c5       3
//   innerCol     c9       1
//   outerCol     c10      1
//   extent       c11      1
//   strokeMult   c12      1
//   type         c13      1
//   g_sampler    s0       1
//

    ps_3_0
    def c0, -0, -1, 0, 0.5
    def c1, 2, -1, 1, -2
    dcl_texcoord v0.xy
    dcl_texcoord1 v1.xy
    dcl_2d s0
    mad r0.x, v0.x, c1.x, c1.y
    add r0.x, -r0_abs.x, c1.z
    mul r0.x, r0.x, c12.x
    min r1.x, r0.x, c1.z
    min r0.x, v0.y, c1.z
    mul r0.y, r0.x, r1.x
    mov r2.xyw, c1
    add r0.zw, r2.xyyw, c13.y
    if_eq c13.x, r2.x
      mov r3, c1.z
    else
      texld r4, v0, s0
      mul r1.yzw, r4.w, r4.xxyz
      cmp r4.xyz, -r0_abs.z, r1.yzww, r4
      cmp r4.yzw, -r0_abs.w, r4.x, r4
      mul r3, r4, c9
    endif
    mad r0.x, r1.x, r0.x, -c12.y
    cmp r1, r0.x, c0.x, c0.y
    texkill r1
    abs r0.x, c13.x
    mul r1.xy, c6, v1.y
    mad r1.xy, c5, v1.x, r1
    add r1.xy, r1, c7
    add r1.zw, -c11.z, c11.xyxy
    add r1.zw, -r1, r1_abs.xyxy
    max r2.x, r1.z, r1.w
    min r4.x, r2.x, c0.z
    max r2.xz, r1.zyww, c0.z
    dp2add r1.z, r2.xzzw, r2.xzzw, c0.z
    rsq r1.z, r1.z
    rcp r1.z, r1.z
    add r1.z, r1.z, r4.x
    add r1.z, r1.z, -c11.z
    mov r1.w, c0.w
    mad r1.z, c11.w, r1.w, r1.z
    rcp r1.w, c11.w
    mul_sat r1.z, r1.w, r1.z
    mov r4, c9
    add r4, -r4, c10
    mad r4, r1.z, r4, c9
    mul r4, r0.y, r4
    add r1.z, r2.y, c13.x
    rcp r2.x, c11.x
    rcp r2.y, c11.y
    mul r1.xy, r1, r2
    texld r2, r1, s0
    mul r1.xyw, r2.w, r2.xyzz
    cmp r2.xyz, -r0_abs.z, r1.xyww, r2
    cmp r2.yzw, -r0_abs.w, r2.x, r2
    mul r2, r2, c9
    mul r2, r0.y, r2
    cmp r1, -r1_abs.z, r2, r3
    cmp oC0, -r0.x, r4, r1

// approximately 57 instruction slots used (2 texture, 55 arithmetic)
#endif

const BYTE g_ps30_D3D9PixelShaderAA_Main[] =
{
      0,   3, 255, 255, 254, 255, 
     87,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  47,   1, 
      0,   0,   0,   3, 255, 255, 
      7,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
     40,   1,   0,   0, 168,   0, 
      0,   0,   2,   0,  11,   0, 
      1,   0,  46,   0, 176,   0, 
      0,   0,   0,   0,   0,   0, 
    192,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   2,   0, 
    204,   0,   0,   0,   0,   0, 
      0,   0, 220,   0,   0,   0, 
      2,   0,   9,   0,   1,   0, 
     38,   0, 176,   0,   0,   0, 
      0,   0,   0,   0, 229,   0, 
      0,   0,   2,   0,  10,   0, 
      1,   0,  42,   0, 176,   0, 
      0,   0,   0,   0,   0,   0, 
    238,   0,   0,   0,   2,   0, 
      5,   0,   3,   0,  22,   0, 
    248,   0,   0,   0,   0,   0, 
      0,   0,   8,   1,   0,   0, 
      2,   0,  12,   0,   1,   0, 
     50,   0, 176,   0,   0,   0, 
      0,   0,   0,   0,  19,   1, 
      0,   0,   2,   0,  13,   0, 
      1,   0,  54,   0,  24,   1, 
      0,   0,   0,   0,   0,   0, 
    101, 120, 116, 101, 110, 116, 
      0, 171,   1,   0,   3,   0, 
      1,   0,   4,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    103,  95, 115,  97, 109, 112, 
    108, 101, 114,   0, 171, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 105, 110, 
    110, 101, 114,  67, 111, 108, 
      0, 111, 117, 116, 101, 114, 
     67, 111, 108,   0, 112,  97, 
    105, 110, 116,  77,  97, 116, 
      0, 171,   3,   0,   3,   0, 
      4,   0,   4,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    115, 116, 114, 111, 107, 101, 
     77, 117, 108, 116,   0, 116, 
    121, 112, 101,   0,   1,   0, 
      3,   0,   1,   0,   2,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 112, 115,  95,  51, 
     95,  48,   0,  77, 105,  99, 
    114, 111, 115, 111, 102, 116, 
     32,  40,  82,  41,  32,  72, 
     76,  83,  76,  32,  83, 104, 
     97, 100, 101, 114,  32,  67, 
    111, 109, 112, 105, 108, 101, 
    114,  32,  49,  48,  46,  49, 
      0, 171,  81,   0,   0,   5, 
      0,   0,  15, 160,   0,   0, 
      0, 128,   0,   0, 128, 191, 
      0,   0,   0,   0,   0,   0, 
      0,  63,  81,   0,   0,   5, 
      1,   0,  15, 160,   0,   0, 
      0,  64,   0,   0, 128, 191, 
      0,   0, 128,  63,   0,   0, 
      0, 192,  31,   0,   0,   2, 
      5,   0,   0, 128,   0,   0, 
      3, 144,  31,   0,   0,   2, 
      5,   0,   1, 128,   1,   0, 
      3, 144,  31,   0,   0,   2, 
      0,   0,   0, 144,   0,   8, 
     15, 160,   4,   0,   0,   4, 
      0,   0,   1, 128,   0,   0, 
      0, 144,   1,   0,   0, 160, 
      1,   0,  85, 160,   2,   0, 
      0,   3,   0,   0,   1, 128, 
      0,   0,   0, 140,   1,   0, 
    170, 160,   5,   0,   0,   3, 
      0,   0,   1, 128,   0,   0, 
      0, 128,  12,   0,   0, 160, 
     10,   0,   0,   3,   1,   0, 
      1, 128,   0,   0,   0, 128, 
      1,   0, 170, 160,  10,   0, 
      0,   3,   0,   0,   1, 128, 
      0,   0,  85, 144,   1,   0, 
    170, 160,   5,   0,   0,   3, 
      0,   0,   2, 128,   0,   0, 
      0, 128,   1,   0,   0, 128, 
      1,   0,   0,   2,   2,   0, 
     11, 128,   1,   0, 228, 160, 
      2,   0,   0,   3,   0,   0, 
     12, 128,   2,   0, 212, 128, 
     13,   0,  85, 160,  41,   0, 
      2,   2,  13,   0,   0, 160, 
      2,   0,   0, 128,   1,   0, 
      0,   2,   3,   0,  15, 128, 
      1,   0, 170, 160,  42,   0, 
      0,   0,  66,   0,   0,   3, 
      4,   0,  15, 128,   0,   0, 
    228, 144,   0,   8, 228, 160, 
      5,   0,   0,   3,   1,   0, 
     14, 128,   4,   0, 255, 128, 
      4,   0, 144, 128,  88,   0, 
      0,   4,   4,   0,   7, 128, 
      0,   0, 170, 140,   1,   0, 
    249, 128,   4,   0, 228, 128, 
     88,   0,   0,   4,   4,   0, 
     14, 128,   0,   0, 255, 140, 
      4,   0,   0, 128,   4,   0, 
    228, 128,   5,   0,   0,   3, 
      3,   0,  15, 128,   4,   0, 
    228, 128,   9,   0, 228, 160, 
     43,   0,   0,   0,   4,   0, 
      0,   4,   0,   0,   1, 128, 
      1,   0,   0, 128,   0,   0, 
      0, 128,  12,   0,  85, 161, 
     88,   0,   0,   4,   1,   0, 
     15, 128,   0,   0,   0, 128, 
      0,   0,   0, 160,   0,   0, 
     85, 160,  65,   0,   0,   1, 
      1,   0,  15, 128,  35,   0, 
      0,   2,   0,   0,   1, 128, 
     13,   0,   0, 160,   5,   0, 
      0,   3,   1,   0,   3, 128, 
      6,   0, 228, 160,   1,   0, 
     85, 144,   4,   0,   0,   4, 
      1,   0,   3, 128,   5,   0, 
    228, 160,   1,   0,   0, 144, 
      1,   0, 228, 128,   2,   0, 
      0,   3,   1,   0,   3, 128, 
      1,   0, 228, 128,   7,   0, 
    228, 160,   2,   0,   0,   3, 
      1,   0,  12, 128,  11,   0, 
    170, 161,  11,   0,  68, 160, 
      2,   0,   0,   3,   1,   0, 
     12, 128,   1,   0, 228, 129, 
      1,   0,  68, 139,  11,   0, 
      0,   3,   2,   0,   1, 128, 
      1,   0, 170, 128,   1,   0, 
    255, 128,  10,   0,   0,   3, 
      4,   0,   1, 128,   2,   0, 
      0, 128,   0,   0, 170, 160, 
     11,   0,   0,   3,   2,   0, 
      5, 128,   1,   0, 246, 128, 
      0,   0, 170, 160,  90,   0, 
      0,   4,   1,   0,   4, 128, 
      2,   0, 232, 128,   2,   0, 
    232, 128,   0,   0, 170, 160, 
      7,   0,   0,   2,   1,   0, 
      4, 128,   1,   0, 170, 128, 
      6,   0,   0,   2,   1,   0, 
      4, 128,   1,   0, 170, 128, 
      2,   0,   0,   3,   1,   0, 
      4, 128,   1,   0, 170, 128, 
      4,   0,   0, 128,   2,   0, 
      0,   3,   1,   0,   4, 128, 
      1,   0, 170, 128,  11,   0, 
    170, 161,   1,   0,   0,   2, 
      1,   0,   8, 128,   0,   0, 
    255, 160,   4,   0,   0,   4, 
      1,   0,   4, 128,  11,   0, 
    255, 160,   1,   0, 255, 128, 
      1,   0, 170, 128,   6,   0, 
      0,   2,   1,   0,   8, 128, 
     11,   0, 255, 160,   5,   0, 
      0,   3,   1,   0,  20, 128, 
      1,   0, 255, 128,   1,   0, 
    170, 128,   1,   0,   0,   2, 
      4,   0,  15, 128,   9,   0, 
    228, 160,   2,   0,   0,   3, 
      4,   0,  15, 128,   4,   0, 
    228, 129,  10,   0, 228, 160, 
      4,   0,   0,   4,   4,   0, 
     15, 128,   1,   0, 170, 128, 
      4,   0, 228, 128,   9,   0, 
    228, 160,   5,   0,   0,   3, 
      4,   0,  15, 128,   0,   0, 
     85, 128,   4,   0, 228, 128, 
      2,   0,   0,   3,   1,   0, 
      4, 128,   2,   0,  85, 128, 
     13,   0,   0, 160,   6,   0, 
      0,   2,   2,   0,   1, 128, 
     11,   0,   0, 160,   6,   0, 
      0,   2,   2,   0,   2, 128, 
     11,   0,  85, 160,   5,   0, 
      0,   3,   1,   0,   3, 128, 
      1,   0, 228, 128,   2,   0, 
    228, 128,  66,   0,   0,   3, 
      2,   0,  15, 128,   1,   0, 
    228, 128,   0,   8, 228, 160, 
      5,   0,   0,   3,   1,   0, 
     11, 128,   2,   0, 255, 128, 
      2,   0, 164, 128,  88,   0, 
      0,   4,   2,   0,   7, 128, 
      0,   0, 170, 140,   1,   0, 
    244, 128,   2,   0, 228, 128, 
     88,   0,   0,   4,   2,   0, 
     14, 128,   0,   0, 255, 140, 
      2,   0,   0, 128,   2,   0, 
    228, 128,   5,   0,   0,   3, 
      2,   0,  15, 128,   2,   0, 
    228, 128,   9,   0, 228, 160, 
      5,   0,   0,   3,   2,   0, 
     15, 128,   0,   0,  85, 128, 
      2,   0, 228, 128,  88,   0, 
      0,   4,   1,   0,  15, 128, 
      1,   0, 170, 140,   2,   0, 
    228, 128,   3,   0, 228, 128, 
     88,   0,   0,   4,   0,   8, 
     15, 128,   0,   0,   0, 129, 
      4,   0, 228, 128,   1,   0, 
    228, 128, 255, 255,   0,   0
};
