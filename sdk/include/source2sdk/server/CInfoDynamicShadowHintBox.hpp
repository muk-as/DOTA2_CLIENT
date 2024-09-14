#pragma once
#include "source2sdk/server/CInfoDynamicShadowHint.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4e8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CInfoDynamicShadowHintBox : public server::CInfoDynamicShadowHint
    {
    public:
        Vector m_vBoxMins; // 0x4d0        
        Vector m_vBoxMaxs; // 0x4dc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoDynamicShadowHintBox because it is not a standard-layout class
    static_assert(sizeof(CInfoDynamicShadowHintBox) == 0x4e8);
};
