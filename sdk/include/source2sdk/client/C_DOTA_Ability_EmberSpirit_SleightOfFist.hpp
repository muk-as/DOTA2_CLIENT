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
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_EmberSpirit_SleightOfFist : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vCastLoc; // 0x680            
            std::int32_t m_nHeroesKilled; // 0x68c            
            // m_hAttackEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAttackEntities;
            char m_hAttackEntities[0x18]; // 0x690            
            source2sdk::client::ParticleIndex_t m_nFXMarkerIndex; // 0x6a8            
            uint8_t _pad06ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_EmberSpirit_SleightOfFist because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_EmberSpirit_SleightOfFist) == 0x6b0);
    };
};
