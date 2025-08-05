#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseFilter.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x650
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class FilterHealth : public source2sdk::client::CBaseFilter
        {
        public:
            bool m_bAdrenalineActive; // 0x640            
            uint8_t _pad0641[0x3]; // 0x641
            std::int32_t m_iHealthMin; // 0x644            
            std::int32_t m_iHealthMax; // 0x648            
            uint8_t _pad064c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in FilterHealth because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::FilterHealth) == 0x650);
    };
};
