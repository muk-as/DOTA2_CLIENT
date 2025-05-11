#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimNodeNetworkMode.hpp"
#include "source2sdk/modellib/AnimComponentID.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimComponentUpdater
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            CUtlString m_name; // 0x18            
            source2sdk::modellib::AnimComponentID m_id; // 0x20            
            source2sdk::animgraphlib::AnimNodeNetworkMode m_networkMode; // 0x24            
            bool m_bStartEnabled; // 0x28            
            uint8_t _pad0029[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimComponentUpdater, m_name) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimComponentUpdater, m_id) == 0x20);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimComponentUpdater, m_networkMode) == 0x24);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimComponentUpdater, m_bStartEnabled) == 0x28);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimComponentUpdater) == 0x30);
    };
};
