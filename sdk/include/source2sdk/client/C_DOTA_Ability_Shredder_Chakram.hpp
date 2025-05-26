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
        // Size: 0x6d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Shredder_Chakram : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float radius; // 0x680            
            float speed; // 0x684            
            float pass_slow_duration; // 0x688            
            std::int32_t pass_damage; // 0x68c            
            Vector m_vEndLocation; // 0x690            
            float m_fZCoord; // 0x69c            
            bool m_bIsReturning; // 0x6a0            
            uint8_t _pad06a1[0x3]; // 0x6a1
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6a4            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x6a8            
            source2sdk::client::ParticleIndex_t m_nFXIndexC; // 0x6ac            
            std::int32_t m_nProjectileIndex; // 0x6b0            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x6b4            
            // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hReturnHits;
            char m_hReturnHits[0x18]; // 0x6b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Shredder_Chakram because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Shredder_Chakram) == 0x6d0);
    };
};
