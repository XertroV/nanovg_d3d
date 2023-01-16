uniform float2 viewSize : register(c0);
// uniform float4x4 viewMatrix : register(c1);

struct VS_OUTPUT
{
    float4 position   : POSITION;       // vertex position
    float2 ftcoord    : TEXCOORD0;      // float 2 tex coord
    float3 fpos       : TEXCOORD1;      // float 3 position
};

VS_OUTPUT D3D9VertexShader_Main(float3 pt : POSITION, float2 tex : TEXCOORD0)
{
    float d = -1.9;
    float4x4 viewMatrix = float4x4(
        float4(1.0, 0.0, .0, 0.0),
        float4(0.0, 1.0, .0, 0.0),
        float4(0.0, 0.0, 1.0, 1.0/d),
        float4(-1.0, -1.0, -d, 0.0)
    );
    float s = sin(.5);
    float c = cos(.5);
    float4x4 rot = float4x4(
        float4(c, 0.0, -s, 0.0),
        float4(0.0, 1.0, 0.0, 0.0),
        float4(s, 0.0, c, 0.0),
        float4(0.0, 0.0, 0.0, 1.0)
    );

    VS_OUTPUT Output;
    Output.ftcoord = tex;
    Output.fpos = pt;
    Output.position = float4(2.0 * pt.x / viewSize.x - 1.0, 1.0 - 2.0 * pt.y / viewSize.y, 1, 1);
    Output.position = mul(viewMatrix, mul(rot, Output.position));
	Output.position.xy += float2(-1.0 / viewSize.x, 1.0 / viewSize.y) * Output.position.ww;
    return Output;
}
