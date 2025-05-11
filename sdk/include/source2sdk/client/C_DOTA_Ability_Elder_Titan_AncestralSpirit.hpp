#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Elder_Titan_AncestralSpirit : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float speed; // 0x5b0            
            float radius; // 0x5b4            
            float buff_duration; // 0x5b8            
            float spirit_duration; // 0x5bc            
            std::int32_t m_nCreepsHit; // 0x5c0            
            std::int32_t m_nHeroesHit; // 0x5c4            
            bool m_bIsReturning; // 0x5c8            
            uint8_t _pad05c9[0x3]; // 0x5c9
            // m_hAncestralSpirit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAncestralSpirit;
            char m_hAncestralSpirit[0x4]; // 0x5cc            
            source2sdk::client::ParticleIndex_t m_nReturnFXIndex; // 0x5d0            
            uint8_t _pad05d4[0x4]; // 0x5d4
            CUtlString m_strMoveSpiritSwapAbility; // 0x5d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Elder_Titan_AncestralSpirit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Elder_Titan_AncestralSpirit) == 0x5e0);
    };
};
