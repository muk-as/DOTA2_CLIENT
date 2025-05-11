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
        // Size: 0x1860
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Broodmother_StickySnare : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vOrigin; // 0x17f8            
            Vector m_vWallDirection; // 0x1804            
            Vector m_vWallRight; // 0x1810            
            float width; // 0x181c            
            float root_duration; // 0x1820            
            float formation_delay; // 0x1824            
            bool m_bTouching; // 0x1828            
            uint8_t _pad1829[0x3]; // 0x1829
            // m_hRight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRight;
            char m_hRight[0x4]; // 0x182c            
            bool m_bParticle; // 0x1830            
            uint8_t _pad1831[0x3]; // 0x1831
            source2sdk::entity2::GameTime_t m_flStartingTime; // 0x1834            
            std::int32_t m_nFoWID; // 0x1838            
            std::int32_t m_nTeamID; // 0x183c            
            // m_vecAffectedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecAffectedHeroes;
            char m_vecAffectedHeroes[0x18]; // 0x1840            
            source2sdk::client::ParticleIndex_t m_nWarmupFXIndex; // 0x1858            
            uint8_t _pad185c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Broodmother_StickySnare because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Broodmother_StickySnare) == 0x1860);
    };
};
