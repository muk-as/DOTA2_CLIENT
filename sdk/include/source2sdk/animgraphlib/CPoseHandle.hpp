#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/PoseType_t.hpp"

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
        class CPoseHandle
        {
        public:
            std::uint16_t m_nIndex; // 0x_            
            source2sdk::animgraphlib::PoseType_t m_eType; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CPoseHandle, m_nIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CPoseHandle, m_eType) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CPoseHandle) == 0x_);
    };
};
