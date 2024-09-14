#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
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
    // Size: 0x1810
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_ShadowShaman_SerpentWard : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        QAngle m_angle; // 0x1800        
        int32_t m_iPoseParameterAim; // 0x180c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_ShadowShaman_SerpentWard because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_ShadowShaman_SerpentWard) == 0x1810);
};
