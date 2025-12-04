#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/rendersystemdx11/RsCullMode_t.hpp"
#include "source2sdk/rendersystemdx11/RsFillMode_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace rendersystemdx11
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct RsRasterizerStateDesc_t
        {
        public:
            source2sdk::rendersystemdx11::RsFillMode_t m_nFillMode; // 0x_            
            source2sdk::rendersystemdx11::RsCullMode_t m_nCullMode; // 0x_            
            bool m_bDepthClipEnable; // 0x_            
            bool m_bMultisampleEnable; // 0x_            
            std::int32_t m_nDepthBias; // 0x_            
            float m_flDepthBiasClamp; // 0x_            
            float m_flSlopeScaledDepthBias; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_nFillMode) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_nCullMode) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_bDepthClipEnable) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_bMultisampleEnable) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_nDepthBias) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_flDepthBiasClamp) == 0x_);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_flSlopeScaledDepthBias) == 0x_);
        
        static_assert(sizeof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t) == 0x_);
    };
};
