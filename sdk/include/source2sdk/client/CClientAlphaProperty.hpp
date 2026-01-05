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
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CClientAlphaProperty : public source2sdk::client::IClientAlphaProperty
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::uint16_t m_nDistFadeStart; // 0x_            
            std::uint16_t m_nDistFadeEnd; // 0x_            
            // start of bitfield block
            uint32_t m_nDesyncOffset: 14;
            uint32_t m_bAlphaOverride: 1;
            uint32_t m_bShadowAlphaOverride: 1;
            uint32_t m_nRenderMode: 3;
            uint32_t m_nRenderFX: 5;
            // end of bitfield block// 24 bits
            std::uint8_t m_nAlpha; // 0x_            
            float m_flFadeScale; // 0x_            
            source2sdk::entity2::GameTime_t m_flRenderFxStartTime; // 0x_            
            float m_flRenderFxDuration; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CClientAlphaProperty because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CClientAlphaProperty) == 0x_);
    };
};
