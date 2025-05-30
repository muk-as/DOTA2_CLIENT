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
        // Size: 0x6a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_ChaosKnight_Reality_Rift : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float m_flPercentage; // 0x680            
            uint8_t _pad0684[0x4]; // 0x684
            // m_FXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_FXIndex;
            char m_FXIndex[0x18]; // 0x688            
            // m_hRiftIllusion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRiftIllusion;
            char m_hRiftIllusion[0x4]; // 0x6a0            
            uint8_t _pad06a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_ChaosKnight_Reality_Rift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_ChaosKnight_Reality_Rift) == 0x6a8);
    };
};
