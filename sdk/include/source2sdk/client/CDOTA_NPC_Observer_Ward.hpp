#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    class CNewParticleEffect;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1870
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CDOTA_NPC_Observer_Ward : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        int32_t m_iDuration; // 0x1858        
        [[maybe_unused]] std::uint8_t pad_0x185c[0x4]; // 0x185c
        particleslib::CNewParticleEffect* m_pVisionRangeFX; // 0x1860        
        int32_t m_nPreviewViewer; // 0x1868        
        [[maybe_unused]] std::uint8_t pad_0x186c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_NPC_Observer_Ward because it is not a standard-layout class
    static_assert(sizeof(CDOTA_NPC_Observer_Ward) == 0x1870);
};
