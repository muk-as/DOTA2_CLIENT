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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shredder_Flamethrower : public source2sdk::client::CDOTA_Buff
        {
        public:
            float length; // 0x1878            
            float width; // 0x187c            
            float damage_per_second; // 0x1880            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x1884            
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x4]; // 0x1888            
            source2sdk::entity2::GameTime_t m_flLastHit; // 0x188c            
            // m_vecBurningTrees has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_BaseEntity*> m_vecBurningTrees;
            char m_vecBurningTrees[0x18]; // 0x1890            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_Flamethrower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Shredder_Flamethrower) == 0x18a8);
    };
};
