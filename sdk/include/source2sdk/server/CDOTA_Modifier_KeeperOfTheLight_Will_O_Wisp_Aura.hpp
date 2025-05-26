#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            float wisp_damage; // 0x187c            
            float off_duration; // 0x1880            
            float off_duration_initial; // 0x1884            
            float on_duration; // 0x1888            
            std::int32_t hit_count; // 0x188c            
            std::int32_t m_iAttackCount; // 0x1890            
            source2sdk::entity2::GameTime_t m_flNextTimeOn; // 0x1894            
            bool m_bActive; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x189c            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x18a0            
            source2sdk::entity2::GameTime_t m_flNextTime; // 0x18a4            
            // m_vecDamagedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecDamagedEntities;
            char m_vecDamagedEntities[0x18]; // 0x18a8            
            float m_flCorrectionTime; // 0x18c0            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura) == 0x18c8);
    };
};
