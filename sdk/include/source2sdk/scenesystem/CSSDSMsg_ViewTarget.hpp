#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace scenesystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSSDSMsg_ViewTarget
        {
        public:
            CUtlString m_Name; // 0x_            
            std::uint64_t m_TextureId; // 0x_            
            std::int32_t m_nWidth; // 0x_            
            std::int32_t m_nHeight; // 0x_            
            std::int32_t m_nRequestedWidth; // 0x_            
            std::int32_t m_nRequestedHeight; // 0x_            
            std::int32_t m_nNumMipLevels; // 0x_            
            std::int32_t m_nDepth; // 0x_            
            std::int32_t m_nMultisampleNumSamples; // 0x_            
            std::int32_t m_nFormat; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_Name) == 0x_);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_TextureId) == 0x_);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nWidth) == 0x_);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nHeight) == 0x_);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nRequestedWidth) == 0x_);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nRequestedHeight) == 0x_);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nNumMipLevels) == 0x_);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nDepth) == 0x_);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nMultisampleNumSamples) == 0x_);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nFormat) == 0x_);
        
        static_assert(sizeof(source2sdk::scenesystem::CSSDSMsg_ViewTarget) == 0x_);
    };
};
