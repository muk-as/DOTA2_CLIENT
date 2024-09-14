#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class sMuertaPartingShotSoulDef
    {
    public:
        // hHeroOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hHeroOwner;
        char hHeroOwner[0x4]; // 0x0        
        // hSoulClone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hSoulClone;
        char hSoulClone[0x4]; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sMuertaPartingShotSoulDef, hHeroOwner) == 0x0);
    static_assert(offsetof(sMuertaPartingShotSoulDef, hSoulClone) == 0x4);
    
    static_assert(sizeof(sMuertaPartingShotSoulDef) == 0x8);
};
