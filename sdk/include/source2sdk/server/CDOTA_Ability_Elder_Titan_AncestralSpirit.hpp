#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Elder_Titan_AncestralSpirit : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float speed; // 0x5b8            
            float radius; // 0x5bc            
            float buff_duration; // 0x5c0            
            float spirit_duration; // 0x5c4            
            std::int32_t m_nCreepsHit; // 0x5c8            
            std::int32_t m_nHeroesHit; // 0x5cc            
            bool m_bIsReturning; // 0x5d0            
            uint8_t _pad05d1[0x3]; // 0x5d1
            // m_hAncestralSpirit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAncestralSpirit;
            char m_hAncestralSpirit[0x4]; // 0x5d4            
            source2sdk::client::ParticleIndex_t m_nReturnFXIndex; // 0x5d8            
            uint8_t _pad05dc[0x4]; // 0x5dc
            CUtlString m_strMoveSpiritSwapAbility; // 0x5e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Elder_Titan_AncestralSpirit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Elder_Titan_AncestralSpirit) == 0x5e8);
    };
};
