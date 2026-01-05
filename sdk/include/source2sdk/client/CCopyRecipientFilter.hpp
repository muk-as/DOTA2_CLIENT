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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CCopyRecipientFilter
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_Flags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Recipients has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CPlayerSlot> m_Recipients;
            char m_Recipients[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CPlayerSlot m_slotPlayerExcludedDueToPrediction; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCopyRecipientFilter, m_Flags) == 0x_);
        static_assert(offsetof(source2sdk::client::CCopyRecipientFilter, m_Recipients) == 0x_);
        static_assert(offsetof(source2sdk::client::CCopyRecipientFilter, m_slotPlayerExcludedDueToPrediction) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CCopyRecipientFilter) == 0x_);
    };
};
