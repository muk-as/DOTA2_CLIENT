#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
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
    // Size: 0x1b98
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nTargetAngle"
    // static metadata: MNetworkVarNames "int m_nTargetRange"
    #pragma pack(push, 1)
    class C_DOTA_Unit_Hero_Razor : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        int32_t m_iPoseParameterAim; // 0x1b88        
        int32_t m_iPoseParameterRange; // 0x1b8c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_nTargetAngle; // 0x1b90        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_nTargetRange; // 0x1b94        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Razor because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Hero_Razor) == 0x1b98);
};
