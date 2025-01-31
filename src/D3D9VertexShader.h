#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
// Parameters:
//
//   float2 viewSize;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   viewSize     c0       1
//

    vs_3_0
    def c1, -1, 1, 0.473684192, 1.89999998
    def c2, 0.87758255, 0, -0.47942555, 0.47942555
    def c3, 1, 0, 0, 0
    dcl_position v0
    dcl_texcoord v1
    dcl_position o0
    dcl_texcoord o1.xy
    dcl_texcoord1 o2.xyz
    add r0.xy, v0, v0
    rcp r0.z, c0.x
    mad r1.x, r0.x, r0.z, c1.x
    rcp r2.y, c0.y
    mad r1.y, r0.y, -r2.y, c1.y
    mov r1.zw, c1
    dp4 o0.z, c2.wyxy, r1
    dp4 r0.y, c3.xyyx, r1
    dp4 r1.x, c2.xyzy, r1
    mul r2.x, r0.z, r0.y
    mov r0.x, c1.x
    mad o0.xy, r2, r0, r1
    mov o0.w, r0.y
    mov o1.xy, v1
    mov o2.xyz, v0

// approximately 15 instruction slots used
#endif

const BYTE g_vs30_D3D9VertexShader_Main[] =
{
      0,   3, 254, 255, 254, 255, 
     32,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  83,   0, 
      0,   0,   0,   3, 254, 255, 
      1,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
     76,   0,   0,   0,  48,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   2,   0,  60,   0, 
      0,   0,   0,   0,   0,   0, 
    118, 105, 101, 119,  83, 105, 
    122, 101,   0, 171, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      2,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 118, 115, 
     95,  51,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  49,  48, 
     46,  49,   0, 171,  81,   0, 
      0,   5,   1,   0,  15, 160, 
      0,   0, 128, 191,   0,   0, 
    128,  63, 188, 134, 242,  62, 
     51,  51, 243,  63,  81,   0, 
      0,   5,   2,   0,  15, 160, 
     64, 169,  96,  63,   0,   0, 
      0,   0,  68, 119, 245, 190, 
     68, 119, 245,  62,  81,   0, 
      0,   5,   3,   0,  15, 160, 
      0,   0, 128,  63,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,  15, 144,  31,   0, 
      0,   2,   5,   0,   0, 128, 
      1,   0,  15, 144,  31,   0, 
      0,   2,   0,   0,   0, 128, 
      0,   0,  15, 224,  31,   0, 
      0,   2,   5,   0,   0, 128, 
      1,   0,   3, 224,  31,   0, 
      0,   2,   5,   0,   1, 128, 
      2,   0,   7, 224,   2,   0, 
      0,   3,   0,   0,   3, 128, 
      0,   0, 228, 144,   0,   0, 
    228, 144,   6,   0,   0,   2, 
      0,   0,   4, 128,   0,   0, 
      0, 160,   4,   0,   0,   4, 
      1,   0,   1, 128,   0,   0, 
      0, 128,   0,   0, 170, 128, 
      1,   0,   0, 160,   6,   0, 
      0,   2,   2,   0,   2, 128, 
      0,   0,  85, 160,   4,   0, 
      0,   4,   1,   0,   2, 128, 
      0,   0,  85, 128,   2,   0, 
     85, 129,   1,   0,  85, 160, 
      1,   0,   0,   2,   1,   0, 
     12, 128,   1,   0, 228, 160, 
      9,   0,   0,   3,   0,   0, 
      4, 224,   2,   0,  71, 160, 
      1,   0, 228, 128,   9,   0, 
      0,   3,   0,   0,   2, 128, 
      3,   0,  20, 160,   1,   0, 
    228, 128,   9,   0,   0,   3, 
      1,   0,   1, 128,   2,   0, 
    100, 160,   1,   0, 228, 128, 
      5,   0,   0,   3,   2,   0, 
      1, 128,   0,   0, 170, 128, 
      0,   0,  85, 128,   1,   0, 
      0,   2,   0,   0,   1, 128, 
      1,   0,   0, 160,   4,   0, 
      0,   4,   0,   0,   3, 224, 
      2,   0, 228, 128,   0,   0, 
    228, 128,   1,   0, 228, 128, 
      1,   0,   0,   2,   0,   0, 
      8, 224,   0,   0,  85, 128, 
      1,   0,   0,   2,   1,   0, 
      3, 224,   1,   0, 228, 144, 
      1,   0,   0,   2,   2,   0, 
      7, 224,   0,   0, 228, 144, 
    255, 255,   0,   0
};
