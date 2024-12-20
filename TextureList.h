struct MaterialsForMipCount
{
  unsigned int count;
  _DWORD *v2; //probably something like 'Material**' or something
};

struct TextureList //Xbox-only asset, sizeof 0x24
{
    const char* v_str; //probably name
    MaterialsForMipCount v_MaterialsForMipCountArray[4];
};