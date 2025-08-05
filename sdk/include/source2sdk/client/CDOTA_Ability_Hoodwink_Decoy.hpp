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
        // Size: 0x6c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Hoodwink_Decoy : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // hIllusion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hIllusion;
            char hIllusion[0x18]; // 0x688            
            float decoy_stun_duration; // 0x6a0            
            float decoy_detonate_radius; // 0x6a4            
            float projectile_speed; // 0x6a8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6ac            
            uint8_t _pad06b0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Hoodwink_Decoy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Hoodwink_Decoy) == 0x6c8);
    };
};
