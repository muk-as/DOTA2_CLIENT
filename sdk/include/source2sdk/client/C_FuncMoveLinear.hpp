#pragma once
#include "source2sdk/client/C_BaseToggle.hpp"
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
    // Size: 0x7d8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkIncludeByName "m_vecVelocity"
    // static metadata: MNetworkOverride "m_fFlags C_BaseEntity"
    #pragma pack(push, 1)
    class C_FuncMoveLinear : public client::C_BaseToggle
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_FuncMoveLinear) == 0x7d8);
};
