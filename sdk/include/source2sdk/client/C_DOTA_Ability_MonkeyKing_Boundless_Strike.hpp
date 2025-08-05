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
        struct C_DOTA_BaseNPC;
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
        // Size: 0x6b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_MonkeyKing_Boundless_Strike : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float strike_cast_range; // 0x688            
            float strike_radius; // 0x68c            
            std::int32_t spring_channel_pct; // 0x690            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x694            
            bool m_bIsAltCastState; // 0x698            
            uint8_t _pad0699[0x7]; // 0x699
            // struckEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_DOTA_BaseNPC*> struckEntities;
            char struckEntities[0x18]; // 0x6a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_MonkeyKing_Boundless_Strike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_MonkeyKing_Boundless_Strike) == 0x6b8);
    };
};
