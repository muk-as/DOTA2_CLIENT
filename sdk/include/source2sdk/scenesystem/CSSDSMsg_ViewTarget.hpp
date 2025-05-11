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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSSDSMsg_ViewTarget
        {
        public:
            CUtlString m_Name; // 0x0            
            std::uint64_t m_TextureId; // 0x8            
            std::int32_t m_nWidth; // 0x10            
            std::int32_t m_nHeight; // 0x14            
            std::int32_t m_nRequestedWidth; // 0x18            
            std::int32_t m_nRequestedHeight; // 0x1c            
            std::int32_t m_nNumMipLevels; // 0x20            
            std::int32_t m_nDepth; // 0x24            
            std::int32_t m_nMultisampleNumSamples; // 0x28            
            std::int32_t m_nFormat; // 0x2c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_Name) == 0x0);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_TextureId) == 0x8);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nWidth) == 0x10);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nHeight) == 0x14);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nRequestedWidth) == 0x18);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nRequestedHeight) == 0x1c);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nNumMipLevels) == 0x20);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nDepth) == 0x24);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nMultisampleNumSamples) == 0x28);
        static_assert(offsetof(source2sdk::scenesystem::CSSDSMsg_ViewTarget, m_nFormat) == 0x2c);
        
        static_assert(sizeof(source2sdk::scenesystem::CSSDSMsg_ViewTarget) == 0x30);
    };
};
