#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/rendersystemdx11/RsComparison_t.hpp"
#include "source2sdk/rendersystemdx11/RsStencilStateDesc_t.hpp"

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
        struct RsDepthStencilStateDesc_t
        {
        public:
            // start of bitfield block
            uint8_t m_bDepthTestEnable: 1;
            uint8_t m_bDepthWriteEnable: 1;
            // end of bitfield block// 2 bits
            source2sdk::rendersystemdx11::RsComparison_t m_depthFunc; // 0x_            
            // Property RsDepthStencilStateDesc_t::m_stencilState appears to be misaligned. Its alignment is unknown and it is not aligned to max_align_t (8).
            char m_stencilState[0x_];
            // source2sdk::rendersystemdx11::RsStencilStateDesc_t m_stencilState; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offset of bitfield RsDepthStencilStateDesc_t::m_bDepthTestEnable
        // Cannot assert offset of bitfield RsDepthStencilStateDesc_t::m_bDepthWriteEnable
        static_assert(offsetof(source2sdk::rendersystemdx11::RsDepthStencilStateDesc_t, m_depthFunc) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsDepthStencilStateDesc_t, m_stencilState) == 0x_);
        
        static_assert(sizeof(source2sdk::rendersystemdx11::RsDepthStencilStateDesc_t) == 0x_);
    };
};
