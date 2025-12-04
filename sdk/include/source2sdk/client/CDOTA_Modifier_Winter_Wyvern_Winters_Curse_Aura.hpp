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
        class CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            std::int32_t m_nAlliesTaunted; // 0x_            
            bool m_bRelicTriggered; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float radius; // 0x_            
            std::int32_t damage_reduction; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastSeen; // 0x_            
            bool transfer_on_death; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vhAffectedEnemyHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vhAffectedEnemyHeroes;
            char m_vhAffectedEnemyHeroes[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura) == 0x_);
    };
};
