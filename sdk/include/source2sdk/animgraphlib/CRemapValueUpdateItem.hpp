#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRemapValueUpdateItem
        {
        public:
            source2sdk::animgraphlib::CAnimParamHandle m_hParamIn; // 0x0            
            source2sdk::animgraphlib::CAnimParamHandle m_hParamOut; // 0x2            
            float m_flMinInputValue; // 0x4            
            float m_flMaxInputValue; // 0x8            
            float m_flMinOutputValue; // 0xc            
            float m_flMaxOutputValue; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CRemapValueUpdateItem, m_hParamIn) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CRemapValueUpdateItem, m_hParamOut) == 0x2);
        static_assert(offsetof(source2sdk::animgraphlib::CRemapValueUpdateItem, m_flMinInputValue) == 0x4);
        static_assert(offsetof(source2sdk::animgraphlib::CRemapValueUpdateItem, m_flMaxInputValue) == 0x8);
        static_assert(offsetof(source2sdk::animgraphlib::CRemapValueUpdateItem, m_flMinOutputValue) == 0xc);
        static_assert(offsetof(source2sdk::animgraphlib::CRemapValueUpdateItem, m_flMaxOutputValue) == 0x10);
        
        static_assert(sizeof(source2sdk::animgraphlib::CRemapValueUpdateItem) == 0x14);
    };
};
