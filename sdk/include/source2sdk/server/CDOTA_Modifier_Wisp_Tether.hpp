#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Wisp_Tether : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bInManaGained; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x187c            
            // hStunnedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hStunnedEntities;
            char hStunnedEntities[0x18]; // 0x1880            
            float stun_duration; // 0x1898            
            std::int32_t movespeed; // 0x189c            
            std::int32_t self_bonus; // 0x18a0            
            bool m_bIsInRange; // 0x18a4            
            uint8_t _pad18a5[0x3]; // 0x18a5
            float radius; // 0x18a8            
            float latch_distance; // 0x18ac            
            std::int32_t damage_absorb; // 0x18b0            
            float m_flHealthHealed; // 0x18b4            
            float m_flManaHealed; // 0x18b8            
            float tether_heal_amp; // 0x18bc            
            float tether_mana_amp; // 0x18c0            
            source2sdk::entity2::GameTime_t m_flHealMessageTime; // 0x18c4            
            source2sdk::entity2::GameTime_t m_flManaMessageTime; // 0x18c8            
            uint8_t _pad18cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Tether because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Wisp_Tether) == 0x18d0);
    };
};
