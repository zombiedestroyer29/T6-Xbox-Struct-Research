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

/*
struct $DCE6859C6538AFC8E406E880B28D3E35
{
  unsigned __int32 Type : 2;
  unsigned __int32 SignX : 2;
  unsigned __int32 SignY : 2;
  unsigned __int32 SignZ : 2;
  unsigned __int32 SignW : 2;
 unsigned __int32 ClampX : 3;
 unsigned __int32 ClampY : 3;
 unsigned __int32 ClampZ : 3;
 // padding bit
 // padding bit
 // padding bit
 unsigned __int32 Pitch : 9;
 unsigned __int32 Tiled : 1;
  unsigned __int32 DataFormat : 6;
  unsigned __int32 Endian : 2;
  unsigned __int32 RequestSize : 2;
 unsigned __int32 Stacked : 1;
 unsigned __int32 ClampPolicy : 1;
 unsigned __int32 BaseAddress : 20;
    GPUTEXTURE_FETCH_CONSTANT::<unnamed_tag>::<unnamed_tag> Size;
  unsigned __int32 NumFormat : 1;
  unsigned __int32 SwizzleX : 3;
  unsigned __int32 SwizzleY : 3;
  unsigned __int32 SwizzleZ : 3;
 unsigned __int32 SwizzleW : 3;
 __int32 ExpAdjust : 6;
 unsigned __int32 MagFilter : 2;
 unsigned __int32 MinFilter : 2;
 unsigned __int32 MipFilter : 2;
 unsigned __int32 AnisoFilter : 3;
 // padding bit
 // padding bit
 // padding bit
 unsigned __int32 BorderSize : 1;
  unsigned __int32 VolMagFilter : 1;
  unsigned __int32 VolMinFilter : 1;
  unsigned __int32 MinMipLevel : 4;
  unsigned __int32 MaxMipLevel : 4;
 unsigned __int32 MagAnisoWalk : 1;
 unsigned __int32 MinAnisoWalk : 1;
 __int32 LODBias : 10;
 __int32 GradExpAdjustH : 5;
 __int32 GradExpAdjustV : 5;
  unsigned __int32 BorderColor : 2;
  unsigned __int32 ForceBCWToMax : 1;
  unsigned __int32 TriClamp : 2;
  __int32 AnisoBias : 4;
  unsigned __int32 Dimension : 2;
 unsigned __int32 PackedMips : 1;
 unsigned __int32 MipAddress : 20;
};
*/
union GPUTEXTURE_FETCH_CONSTANT
{
    //$DCE6859C6538AFC8E406E880B28D3E35 __s0;
    unsigned int dword[6];
};

struct D3DBaseTexture : D3DResource
{
    unsigned int MipFlush;
    GPUTEXTURE_FETCH_CONSTANT Format;
};

struct D3DArrayTexture : D3DBaseTexture{};
struct D3DCubeTexture : D3DBaseTexture{};
struct D3DLineTexture : D3DBaseTexture{};
struct D3DTexture : D3DBaseTexture{};
struct D3DVolumeTexture : D3DBaseTexture{};

union GfxTexture
{
    struct D3DBaseTexture basemap;
    struct D3DLineTexture linemap;
    struct D3DTexture map;
    struct D3DVolumeTexture volmap;
    struct D3DCubeTexture cubemap;
};

struct CardMemory
{
  int platform;
};

struct GfxImage
{
  GfxTexture texture;
  unsigned __int8 mapType;
  unsigned __int8 semantic;
  unsigned __int8 category;
  bool delayLoadPixels;
  CardMemory cardMemory;
  unsigned __int16 width;
  unsigned __int16 height;
  unsigned __int16 depth;
  unsigned __int8 levelCount;
  unsigned __int8 streaming;
  unsigned int baseSize;
  unsigned __int8 *pixels;
  GfxStreamedPartInfo streamedParts[5];
  unsigned int UNKNOWN;
  unsigned __int8 streamedPartCount;
  const char *name;
  unsigned int hash;
};