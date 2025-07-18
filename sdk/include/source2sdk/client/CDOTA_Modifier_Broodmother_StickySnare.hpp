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
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Broodmother_StickySnare : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vOrigin; // 0x1878            
            Vector m_vWallDirection; // 0x1884            
            Vector m_vWallRight; // 0x1890            
            float width; // 0x189c            
            float root_duration; // 0x18a0            
            float formation_delay; // 0x18a4            
            bool m_bTouching; // 0x18a8            
            uint8_t _pad18a9[0x3]; // 0x18a9
            // m_hRight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRight;
            char m_hRight[0x4]; // 0x18ac            
            bool m_bParticle; // 0x18b0            
            uint8_t _pad18b1[0x3]; // 0x18b1
            source2sdk::entity2::GameTime_t m_flStartingTime; // 0x18b4            
            std::int32_t m_nFoWID; // 0x18b8            
            std::int32_t m_nTeamID; // 0x18bc            
            // m_vecAffectedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecAffectedHeroes;
            char m_vecAffectedHeroes[0x18]; // 0x18c0            
            source2sdk::client::ParticleIndex_t m_nWarmupFXIndex; // 0x18d8            
            uint8_t _pad18dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Broodmother_StickySnare because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Broodmother_StickySnare) == 0x18e0);
    };
};
