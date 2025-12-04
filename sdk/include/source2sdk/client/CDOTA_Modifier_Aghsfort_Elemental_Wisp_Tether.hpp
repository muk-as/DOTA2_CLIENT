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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Aghsfort_Elemental_Wisp_Tether : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bInManaGained; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            // hStunnedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hStunnedEntities;
            char hStunnedEntities[0x_]; // 0x_            
            float slow_duration; // 0x_            
            std::int32_t movespeed; // 0x_            
            std::int32_t self_bonus; // 0x_            
            bool m_bIsInRange; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t radius; // 0x_            
            std::int32_t latch_distance; // 0x_            
            float m_flHealthHealed; // 0x_            
            float m_flManaHealed; // 0x_            
            float tether_heal_amp; // 0x_            
            source2sdk::entity2::GameTime_t m_flHealMessageTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flManaMessageTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Elemental_Wisp_Tether because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Aghsfort_Elemental_Wisp_Tether) == 0x_);
    };
};
