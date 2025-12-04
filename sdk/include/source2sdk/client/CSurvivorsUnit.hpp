#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsEntity.hpp"
#include "source2sdk/client/SurvivorsUnitID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsUnit : public source2sdk::client::CSurvivorsEntity
        {
        public:
            source2sdk::client::SurvivorsUnitID_t m_id; // 0x_            
            float m_flHealth; // 0x_            
            float m_flMaxHealth; // 0x_            
            bool m_bInvulnerable; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector2D m_vFacing; // 0x_            
            float m_flMovementSpeed; // 0x_            
            float m_flMass; // 0x_            
            float m_flKnockbackResistance; // 0x_            
            float m_flStatusResistance; // 0x_            
            float m_flBodyRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_playingStatusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_playingStatusParticle;
            char m_playingStatusParticle[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsUnit) == 0x_);
    };
};
