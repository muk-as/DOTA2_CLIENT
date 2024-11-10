#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition : public client::CDOTA_Buff
    {
    public:
        Vector m_vTargetPos; // 0x1708        
        // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAttackTarget;
        char m_hAttackTarget[0x4]; // 0x1714        
        float attack_speed; // 0x1718        
        int32_t second_radius; // 0x171c        
        int32_t outer_attack_buffer; // 0x1720        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x1724        
        bool m_bDisarmed; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x3]; // 0x1729
        entity2::GameTime_t m_flNextAttackTime; // 0x172c        
        client::ParticleIndex_t m_nFXIndex; // 0x1730        
        bool m_bAutoSpawn; // 0x1734        
        [[maybe_unused]] std::uint8_t pad_0x1735[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition) == 0x1738);
};
