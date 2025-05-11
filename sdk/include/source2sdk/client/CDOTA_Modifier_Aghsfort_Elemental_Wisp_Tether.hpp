#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1848
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Aghsfort_Elemental_Wisp_Tether : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bInManaGained; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x17fc            
            // hStunnedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hStunnedEntities;
            char hStunnedEntities[0x18]; // 0x1800            
            float slow_duration; // 0x1818            
            std::int32_t movespeed; // 0x181c            
            std::int32_t self_bonus; // 0x1820            
            bool m_bIsInRange; // 0x1824            
            uint8_t _pad1825[0x3]; // 0x1825
            std::int32_t radius; // 0x1828            
            std::int32_t latch_distance; // 0x182c            
            float m_flHealthHealed; // 0x1830            
            float m_flManaHealed; // 0x1834            
            float tether_heal_amp; // 0x1838            
            source2sdk::entity2::GameTime_t m_flHealMessageTime; // 0x183c            
            source2sdk::entity2::GameTime_t m_flManaMessageTime; // 0x1840            
            uint8_t _pad1844[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Elemental_Wisp_Tether because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Aghsfort_Elemental_Wisp_Tether) == 0x1848);
    };
};
