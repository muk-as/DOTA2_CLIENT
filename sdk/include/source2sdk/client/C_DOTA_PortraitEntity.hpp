#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1848
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_DOTA_PortraitEntity : public client::C_DOTA_BaseNPC
    {
    public:
        client::CountdownTimer m_PetIdleTimer; // 0x1800        
        client::ParticleIndex_t m_nMouthFX; // 0x1818        
        int32_t m_nMouthControlPoint; // 0x181c        
        client::ParticleIndex_t m_iPortraitParticle; // 0x1820        
        int32_t m_PortraitActivity; // 0x1824        
        // m_CustomActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbol> m_CustomActivityModifiers;
        char m_CustomActivityModifiers[0x18]; // 0x1828        
        bool m_bIsSimulationActive; // 0x1840        
        [[maybe_unused]] std::uint8_t pad_0x1841[0x3]; // 0x1841
        CEntityHandle m_hAppearanceFromNPC; // 0x1844        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_PortraitEntity because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_PortraitEntity) == 0x1848);
};
