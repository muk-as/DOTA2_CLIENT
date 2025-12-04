#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupEventTime
        {
        public:
            float m_flDelay; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strEventName; // 0x_            
            bool m_bPathFlipped; // 0x_            
            bool m_bInvertColors; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nCount; // 0x_            
            float m_flRepeatInterval; // 0x_            
            Vector m_vOffset; // 0x_            
            Vector m_vRepeatOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CShmupEventTime> m_children;
            char m_children[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupEventTime, m_flDelay) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventTime, m_strEventName) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventTime, m_bPathFlipped) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventTime, m_bInvertColors) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventTime, m_nCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventTime, m_flRepeatInterval) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventTime, m_vOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventTime, m_vRepeatOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupEventTime, m_children) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CShmupEventTime) == 0x_);
    };
};
