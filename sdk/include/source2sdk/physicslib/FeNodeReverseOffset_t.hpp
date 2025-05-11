#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeNodeReverseOffset_t
        {
        public:
            Vector vOffset; // 0x0            
            std::uint16_t nBoneCtrl; // 0xc            
            std::uint16_t nTargetNode; // 0xe            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeNodeReverseOffset_t, vOffset) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeNodeReverseOffset_t, nBoneCtrl) == 0xc);
        static_assert(offsetof(source2sdk::physicslib::FeNodeReverseOffset_t, nTargetNode) == 0xe);
        
        static_assert(sizeof(source2sdk::physicslib::FeNodeReverseOffset_t) == 0x10);
    };
};
