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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    #pragma pack(push, 1)
    class sBounceInfo
    {
    public:
        int32_t iAttackIndex; // 0x0        
        int32_t iBounceCount; // 0x4        
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> hAlreadyHitList;
        char hAlreadyHitList[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sBounceInfo, iAttackIndex) == 0x0);
    static_assert(offsetof(sBounceInfo, iBounceCount) == 0x4);
    static_assert(offsetof(sBounceInfo, hAlreadyHitList) == 0x8);
    
    static_assert(sizeof(sBounceInfo) == 0x20);
};
