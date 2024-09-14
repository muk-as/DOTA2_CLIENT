#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    #pragma pack(push, 1)
    class C_DOTA_Unit_Hero_Windrunner : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_nTargetAngle; // 0x1b88        
        int32_t m_iPoseParameterAim; // 0x1b8c        
        client::ParticleIndex_t m_nFXDeath; // 0x1b90        
        [[maybe_unused]] std::uint8_t pad_0x1b94[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Windrunner because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Hero_Windrunner) == 0x1b98);
};
