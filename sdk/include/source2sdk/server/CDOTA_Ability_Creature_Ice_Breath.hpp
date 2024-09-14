#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x5e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Creature_Ice_Breath : public server::CDOTABaseAbility
    {
    public:
        int32_t speed; // 0x5a0        
        int32_t projectile_count; // 0x5a4        
        float rotation_angle; // 0x5a8        
        float damage; // 0x5ac        
        float radius; // 0x5b0        
        float slow_duration; // 0x5b4        
        server::CountdownTimer ctTimer; // 0x5b8        
        Vector m_vecStartRot; // 0x5d0        
        Vector m_vecEndRot; // 0x5dc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Creature_Ice_Breath because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Creature_Ice_Breath) == 0x5e8);
};
