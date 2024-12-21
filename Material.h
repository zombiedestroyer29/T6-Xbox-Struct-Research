struct __declspec(align(8)) MaterialInfo
{
  const char *name;
  unsigned int gameFlags;
  unsigned __int8 pad;
  unsigned __int8 sortKey;
  unsigned __int8 textureAtlasRowCount;
  unsigned __int8 textureAtlasColumnCount;
  GfxDrawSurf drawSurf;
  unsigned int surfaceTypeBits;
  unsigned int layeredSurfaceTypes;
  int surfaceFlags;
  int contents;
};

struct __declspec(align(8)) Material
{
  MaterialInfo info;
  unsigned __int8 stateBitsEntry[36];
  unsigned __int8 textureCount;
  unsigned __int8 constantCount;
  unsigned __int8 stateBitsCount;
  unsigned __int8 stateFlags;
  unsigned __int8 cameraRegion;
  unsigned __int8 probeMipBits;
  $2D690740B5269A41031ADA88B23EDE19 ___u8;
  MaterialTextureDef *textureTable;
  $A3587849982658B4EDF5E4DE622F4F55 ___u10;
  GfxStateBits *stateBitsTable;
  Material *thermalMaterial;
};
