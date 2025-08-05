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
        // Size: 0x6d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Shredder_Chakram : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float radius; // 0x688            
            float speed; // 0x68c            
            float pass_slow_duration; // 0x690            
            std::int32_t pass_damage; // 0x694            
            Vector m_vEndLocation; // 0x698            
            float m_fZCoord; // 0x6a4            
            bool m_bIsReturning; // 0x6a8            
            uint8_t _pad06a9[0x3]; // 0x6a9
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6ac            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x6b0            
            source2sdk::client::ParticleIndex_t m_nFXIndexC; // 0x6b4            
            std::int32_t m_nProjectileIndex; // 0x6b8            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x6bc            
            // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hReturnHits;
            char m_hReturnHits[0x18]; // 0x6c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Shredder_Chakram because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Shredder_Chakram) == 0x6d8);
    };
};
