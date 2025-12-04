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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Broodmother_StickySnare : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vOrigin; // 0x_            
            Vector m_vWallDirection; // 0x_            
            Vector m_vWallRight; // 0x_            
            float width; // 0x_            
            float root_duration; // 0x_            
            float formation_delay; // 0x_            
            bool m_bTouching; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hRight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRight;
            char m_hRight[0x_]; // 0x_            
            bool m_bParticle; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flStartingTime; // 0x_            
            std::int32_t m_nFoWID; // 0x_            
            std::int32_t m_nTeamID; // 0x_            
            // m_vecAffectedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecAffectedHeroes;
            char m_vecAffectedHeroes[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nWarmupFXIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Broodmother_StickySnare because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Broodmother_StickySnare) == 0x_);
    };
};
