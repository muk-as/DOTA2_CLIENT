#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimActionUpdater.hpp"
#include "source2sdk/modellib/AnimComponentID.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x20
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CToggleComponentActionUpdater : public source2sdk::animgraphlib::CAnimActionUpdater
        {
        public:
            source2sdk::modellib::AnimComponentID m_componentID; // 0x18            
            bool m_bSetEnabled; // 0x1c            
            uint8_t _pad001d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CToggleComponentActionUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CToggleComponentActionUpdater) == 0x20);
    };
};
