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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Creature_Ice_Breath : public server::CDOTABaseAbility
    {
    public:
        int32_t speed; // 0x5c8        
        int32_t projectile_count; // 0x5cc        
        float rotation_angle; // 0x5d0        
        float damage; // 0x5d4        
        float radius; // 0x5d8        
        float slow_duration; // 0x5dc        
        server::CountdownTimer ctTimer; // 0x5e0        
        Vector m_vecStartRot; // 0x5f8        
        Vector m_vecEndRot; // 0x604        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Creature_Ice_Breath because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Creature_Ice_Breath) == 0x610);
};
