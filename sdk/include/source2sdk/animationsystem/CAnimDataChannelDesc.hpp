#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x90
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimDataChannelDesc
        {
        public:
            CBufferString m_szChannelClass; // 0x0            
            CBufferString m_szVariableName; // 0x10            
            std::int32_t m_nFlags; // 0x20            
            std::int32_t m_nType; // 0x24            
            CBufferString m_szGrouping; // 0x28            
            CBufferString m_szDescription; // 0x38            
            // m_szElementNameArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CBufferString> m_szElementNameArray;
            char m_szElementNameArray[0x18]; // 0x48            
            // m_nElementIndexArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nElementIndexArray;
            char m_nElementIndexArray[0x18]; // 0x60            
            // m_nElementMaskArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_nElementMaskArray;
            char m_nElementMaskArray[0x18]; // 0x78            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimDataChannelDesc, m_szChannelClass) == 0x0);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDataChannelDesc, m_szVariableName) == 0x10);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDataChannelDesc, m_nFlags) == 0x20);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDataChannelDesc, m_nType) == 0x24);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDataChannelDesc, m_szGrouping) == 0x28);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDataChannelDesc, m_szDescription) == 0x38);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDataChannelDesc, m_szElementNameArray) == 0x48);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDataChannelDesc, m_nElementIndexArray) == 0x60);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDataChannelDesc, m_nElementMaskArray) == 0x78);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimDataChannelDesc) == 0x90);
    };
};
