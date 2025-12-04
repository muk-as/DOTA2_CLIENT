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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRemapValueUpdateItem
        {
        public:
            source2sdk::animgraphlib::CAnimParamHandle m_hParamIn; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hParamOut; // 0x_            
            float m_flMinInputValue; // 0x_            
            float m_flMaxInputValue; // 0x_            
            float m_flMinOutputValue; // 0x_            
            float m_flMaxOutputValue; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CRemapValueUpdateItem, m_hParamIn) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CRemapValueUpdateItem, m_hParamOut) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CRemapValueUpdateItem, m_flMinInputValue) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CRemapValueUpdateItem, m_flMaxInputValue) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CRemapValueUpdateItem, m_flMinOutputValue) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CRemapValueUpdateItem, m_flMaxOutputValue) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CRemapValueUpdateItem) == 0x_);
    };
};
