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
        // Size: 0x1848
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x17f8            
            float wisp_damage; // 0x17fc            
            float off_duration; // 0x1800            
            float off_duration_initial; // 0x1804            
            float on_duration; // 0x1808            
            std::int32_t hit_count; // 0x180c            
            std::int32_t m_iAttackCount; // 0x1810            
            source2sdk::entity2::GameTime_t m_flNextTimeOn; // 0x1814            
            bool m_bActive; // 0x1818            
            uint8_t _pad1819[0x3]; // 0x1819
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x181c            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1820            
            source2sdk::entity2::GameTime_t m_flNextTime; // 0x1824            
            // m_vecDamagedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecDamagedEntities;
            char m_vecDamagedEntities[0x18]; // 0x1828            
            float m_flCorrectionTime; // 0x1840            
            uint8_t _pad1844[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura) == 0x1848);
    };
};
