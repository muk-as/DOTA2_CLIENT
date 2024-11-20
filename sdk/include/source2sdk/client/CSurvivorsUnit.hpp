#pragma once
#include "source2sdk/client/CSurvivorsEntity.hpp"
#include "source2sdk/client/SurvivorsUnitID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x180
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsUnit : public client::CSurvivorsEntity
    {
    public:
        client::SurvivorsUnitID_t m_id; // 0x28        
        float m_flHealth; // 0x2c        
        float m_flMaxHealth; // 0x30        
        bool m_bInvulnerable; // 0x34        
        [[maybe_unused]] std::uint8_t pad_0x35[0x3]; // 0x35
        Vector2D m_vFacing; // 0x38        
        float m_flMovementSpeed; // 0x40        
        float m_flMass; // 0x44        
        float m_flKnockbackResistance; // 0x48        
        float m_flStatusResistance; // 0x4c        
        float m_flBodyRadius; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x54[0x4c]; // 0x54
        // m_playingStatusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_playingStatusParticle;
        char m_playingStatusParticle[0xe0]; // 0xa0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsUnit because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsUnit) == 0x180);
};
