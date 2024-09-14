#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Beastmaster_CallOfTheWild_Hawk : public client::CDOTA_Buff
    {
    public:
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x16e8        
        int32_t attack_radius; // 0x16ec        
        entity2::GameTime_t m_flLastAttack; // 0x16f0        
        float roaming_seconds_per_rotation; // 0x16f4        
        int32_t roaming_radius; // 0x16f8        
        float attack_interval; // 0x16fc        
        int32_t min_move_speed; // 0x1700        
        int32_t max_move_speed; // 0x1704        
        int32_t m_iPreviousHawkCount; // 0x1708        
        float m_flRotation; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_CallOfTheWild_Hawk because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Beastmaster_CallOfTheWild_Hawk) == 0x1710);
};
