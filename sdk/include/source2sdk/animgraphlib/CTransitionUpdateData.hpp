#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTransitionUpdateData
        {
        public:
            std::uint8_t m_srcStateIndex; // 0x_            
            std::uint8_t m_destStateIndex; // 0x_            
            // start of bitfield block
            uint8_t m_nHandshakeMaskToDisableFirst: 7;
            uint8_t m_bDisabled: 1;
            // end of bitfield block// 8 bits
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CTransitionUpdateData, m_srcStateIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CTransitionUpdateData, m_destStateIndex) == 0x_);
        // Cannot assert offset of bitfield CTransitionUpdateData::m_nHandshakeMaskToDisableFirst
        // Cannot assert offset of bitfield CTransitionUpdateData::m_bDisabled
        
        static_assert(sizeof(source2sdk::animgraphlib::CTransitionUpdateData) == 0x_);
    };
};
