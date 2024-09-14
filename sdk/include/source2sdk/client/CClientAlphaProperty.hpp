#pragma once
#include "source2sdk/client/IClientAlphaProperty.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x30
    // Has VTable
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CClientAlphaProperty : public client::IClientAlphaProperty
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0x8]; // 0x8
        uint8_t m_nRenderFX; // 0x10        
        uint8_t m_nRenderMode; // 0x11        
        // start of bitfield block at 0x12
        uint8_t m_bAlphaOverride: 1;
        uint8_t m_bShadowAlphaOverride: 1;
        uint8_t m_nReserved: 6;
        // end of bitfield block // 8 bits
        uint8_t m_nAlpha; // 0x13        
        uint16_t m_nDesyncOffset; // 0x14        
        uint16_t m_nReserved2; // 0x16        
        uint16_t m_nDistFadeStart; // 0x18        
        uint16_t m_nDistFadeEnd; // 0x1a        
        float m_flFadeScale; // 0x1c        
        entity2::GameTime_t m_flRenderFxStartTime; // 0x20        
        float m_flRenderFxDuration; // 0x24        
        [[maybe_unused]] std::uint8_t pad_0x28[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CClientAlphaProperty because it is not a standard-layout class
    static_assert(sizeof(CClientAlphaProperty) == 0x30);
};
