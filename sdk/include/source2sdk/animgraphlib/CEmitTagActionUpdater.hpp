#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimActionUpdater.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CEmitTagActionUpdater : public source2sdk::animgraphlib::CAnimActionUpdater
        {
        public:
            std::int32_t m_nTagIndex; // 0x_            
            bool m_bIsZeroDuration; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEmitTagActionUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CEmitTagActionUpdater) == 0x_);
    };
};
