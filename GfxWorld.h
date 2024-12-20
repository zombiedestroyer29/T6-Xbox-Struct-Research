//yes I got these D3D9 structs from Skate 2, so what
//you could realistically use your own from the xbox 360 SDK
struct D3DResource
{
    unsigned int Common;
    unsigned int ReferenceCount;
    unsigned int Fence;
    unsigned int ReadFence;
    unsigned int Identifier;
    unsigned int BaseFlush;
};

struct D3DVertexBuffer : D3DResource {};

struct D3DIndexBuffer : D3DResource
{
    unsigned int Address;
    unsigned int Size;
};

struct GfxWorldVertexData
{
    struct GfxWorldVertex * vertices;
    struct D3DVertexBuffer worldVb;
};

struct GfxWorldVertexLayerData
{
    unsigned int * data;
    struct D3DVertexBuffer layerVb;
};

struct GfxWorldDraw
{
  unsigned int reflectionProbeCount;
  $FB38F030EA0083BD0D17EC888129F137 ___u1;
  $B4EF3D38BE8610BBA4EBD5354A969379 ___u2;
  int lightmapCount;
  $635E812FAB080B9B3A905987B98AC8CD ___u4;
  $8C0CD2F20D4AB90CEF4B7EF1776CD269 ___u5;
  $40E81F39AA7EA8DA6EF0A198775F1226 ___u6;
  unsigned int vertexCount;
  unsigned int vertexDataSize0;
  GfxWorldVertexData vd;
  unsigned int vertexDataSize1;
  GfxWorldVertexLayerData vld;
  int indexCount;
  unsigned __int16 *indices;
  D3DIndexBuffer indexBuffer;
};



struct GfxWorld; //seemingly same as pc