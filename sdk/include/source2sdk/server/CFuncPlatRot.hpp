#pragma once
#include "source2sdk/server/CFuncPlat.hpp"
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
    // Size: 0x850
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFuncPlatRot : public server::CFuncPlat
    {
    public:
        QAngle m_end; // 0x838        
        QAngle m_start; // 0x844        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncPlatRot because it is not a standard-layout class
    static_assert(sizeof(CFuncPlatRot) == 0x850);
};
