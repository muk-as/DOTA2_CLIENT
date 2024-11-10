#pragma once
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x860
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_PortraitBuilding : public client::CBaseAnimatingActivity
    {
    public:
        client::ParticleIndex_t m_nAmbientFXIndex; // 0x848        
        [[maybe_unused]] std::uint8_t pad_0x84c[0x4]; // 0x84c
        // m_nFXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndex;
        char m_nFXIndex[0x8]; // 0x850        
        Color m_ParticleTintColor; // 0x858        
        [[maybe_unused]] std::uint8_t pad_0x85c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_PortraitBuilding because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_PortraitBuilding) == 0x860);
};
