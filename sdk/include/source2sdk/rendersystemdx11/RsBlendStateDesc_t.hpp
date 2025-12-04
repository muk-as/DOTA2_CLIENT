#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace rendersystemdx11
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct RsBlendStateDesc_t
        {
        public:
            std::uint32_t m_srcBlendBits; // 0x_            
            std::uint32_t m_destBlendBits; // 0x_            
            std::uint32_t m_srcBlendAlphaBits; // 0x_            
            std::uint32_t m_destBlendAlphaBits; // 0x_            
            std::uint32_t m_renderTargetWriteMaskBits; // 0x_            
            // start of bitfield block
            uint32_t m_blendOpBits: 30;
            uint32_t m_bAlphaToCoverageEnable: 1;
            uint32_t m_bIndependentBlendEnable: 1;
            // end of bitfield block// 32 bits
            std::uint32_t m_blendOpAlphaBits; // 0x_            
            std::uint8_t m_blendEnableBits; // 0x_            
            std::uint8_t m_srgbWriteEnableBits; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_srcBlendBits) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_destBlendBits) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_srcBlendAlphaBits) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_destBlendAlphaBits) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_renderTargetWriteMaskBits) == 0x_);
        // Cannot assert offset of bitfield RsBlendStateDesc_t::m_blendOpBits
        // Cannot assert offset of bitfield RsBlendStateDesc_t::m_bAlphaToCoverageEnable
        // Cannot assert offset of bitfield RsBlendStateDesc_t::m_bIndependentBlendEnable
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_blendOpAlphaBits) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_blendEnableBits) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_srgbWriteEnableBits) == 0x_);
        
        static_assert(sizeof(source2sdk::rendersystemdx11::RsBlendStateDesc_t) == 0x_);
    };
};
