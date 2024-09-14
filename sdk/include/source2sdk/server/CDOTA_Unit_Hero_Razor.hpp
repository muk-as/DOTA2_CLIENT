#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"
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
    // Size: 0x1e70
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nTargetAngle"
    // static metadata: MNetworkVarNames "int m_nTargetRange"
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_Razor : public server::CDOTA_BaseNPC_Hero
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_nTargetAngle; // 0x1e68        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_nTargetRange; // 0x1e6c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_Razor because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_Razor) == 0x1e70);
};
