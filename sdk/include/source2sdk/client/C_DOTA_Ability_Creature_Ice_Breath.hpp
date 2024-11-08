#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // Size: 0x648
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Creature_Ice_Breath : public client::C_DOTABaseAbility
    {
    public:
        int32_t speed; // 0x600        
        int32_t projectile_count; // 0x604        
        float rotation_angle; // 0x608        
        float damage; // 0x60c        
        float radius; // 0x610        
        float slow_duration; // 0x614        
        client::CountdownTimer ctTimer; // 0x618        
        Vector m_vecStartRot; // 0x630        
        Vector m_vecEndRot; // 0x63c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Creature_Ice_Breath because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Creature_Ice_Breath) == 0x648);
};
