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
        // Type RsStencilStateDesc_t appears to be misaligned. Its alignment is unknown and it is not aligned to max_align_t (8).
        // It has been replaced by a dummy. You can try uncommenting the struct below.
        struct RsStencilStateDesc_t
        {
        public:
            uint8_t _pad_[0x_];         };
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        /*
        #pragma pack(push, 1)
        struct RsStencilStateDesc_t
        {
        public:
            // start of bitfield block
            uint32_t m_bStencilEnable: 1;
            uint32_t m_frontStencilFailOp: 3;
            uint32_t m_frontStencilDepthFailOp: 3;
            uint32_t m_frontStencilPassOp: 3;
            uint32_t m_frontStencilFunc: 3;
            uint32_t m_backStencilFailOp: 3;
            uint32_t m_backStencilDepthFailOp: 3;
            uint32_t m_backStencilPassOp: 3;
            uint32_t m_backStencilFunc: 3;
            // end of bitfield block// 25 bits
            std::uint8_t m_nStencilReadMask; // 0x_            
            std::uint8_t m_nStencilWriteMask; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offset of bitfield RsStencilStateDesc_t::m_bStencilEnable
        // Cannot assert offset of bitfield RsStencilStateDesc_t::m_frontStencilFailOp
        // Cannot assert offset of bitfield RsStencilStateDesc_t::m_frontStencilDepthFailOp
        // Cannot assert offset of bitfield RsStencilStateDesc_t::m_frontStencilPassOp
        // Cannot assert offset of bitfield RsStencilStateDesc_t::m_frontStencilFunc
        // Cannot assert offset of bitfield RsStencilStateDesc_t::m_backStencilFailOp
        // Cannot assert offset of bitfield RsStencilStateDesc_t::m_backStencilDepthFailOp
        // Cannot assert offset of bitfield RsStencilStateDesc_t::m_backStencilPassOp
        // Cannot assert offset of bitfield RsStencilStateDesc_t::m_backStencilFunc
        static_assert(offsetof(source2sdk::rendersystemdx11::RsStencilStateDesc_t, m_nStencilReadMask) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsStencilStateDesc_t, m_nStencilWriteMask) == 0x_);
        */
        
        static_assert(sizeof(source2sdk::rendersystemdx11::RsStencilStateDesc_t) == 0x_);
    };
};
