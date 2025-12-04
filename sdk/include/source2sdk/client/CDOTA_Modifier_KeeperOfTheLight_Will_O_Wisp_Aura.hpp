#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        class CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x_            
            float wisp_damage; // 0x_            
            float off_duration; // 0x_            
            float off_duration_initial; // 0x_            
            float on_duration; // 0x_            
            std::int32_t hit_count; // 0x_            
            std::int32_t m_iAttackCount; // 0x_            
            source2sdk::entity2::GameTime_t m_flNextTimeOn; // 0x_            
            bool m_bActive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x_            
            source2sdk::entity2::GameTime_t m_flNextTime; // 0x_            
            // m_vecDamagedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecDamagedEntities;
            char m_vecDamagedEntities[0x_]; // 0x_            
            float m_flCorrectionTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura) == 0x_);
    };
};
