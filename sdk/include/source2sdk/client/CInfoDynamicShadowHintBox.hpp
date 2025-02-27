#pragma once
#include "source2sdk/client/CInfoDynamicShadowHint.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x590
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CInfoDynamicShadowHintBox : public client::CInfoDynamicShadowHint
    {
    public:
        Vector m_vBoxMins; // 0x578        
        Vector m_vBoxMaxs; // 0x584        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoDynamicShadowHintBox because it is not a standard-layout class
    static_assert(sizeof(CInfoDynamicShadowHintBox) == 0x590);
};
