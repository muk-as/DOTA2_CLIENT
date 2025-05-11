#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/IClientAlphaProperty.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x30
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CClientAlphaProperty : public source2sdk::client::IClientAlphaProperty
        {
        public:
            uint8_t _pad0008[0x8]; // 0x8
            std::uint8_t m_nRenderFX; // 0x10            
            std::uint8_t m_nRenderMode; // 0x11            
            // start of bitfield block
            uint8_t m_bAlphaOverride: 1;
            uint8_t m_bShadowAlphaOverride: 1;
            uint8_t m_nReserved: 6;
            // end of bitfield block// 8 bits
            std::uint8_t m_nAlpha; // 0x13            
            std::uint16_t m_nDesyncOffset; // 0x14            
            std::uint16_t m_nReserved2; // 0x16            
            std::uint16_t m_nDistFadeStart; // 0x18            
            std::uint16_t m_nDistFadeEnd; // 0x1a            
            float m_flFadeScale; // 0x1c            
            source2sdk::entity2::GameTime_t m_flRenderFxStartTime; // 0x20            
            float m_flRenderFxDuration; // 0x24            
            uint8_t _pad0028[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CClientAlphaProperty because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CClientAlphaProperty) == 0x30);
    };
};
