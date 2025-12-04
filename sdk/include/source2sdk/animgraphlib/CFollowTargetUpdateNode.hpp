#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/FollowTargetOpFixedSettings_t.hpp"

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
        class CFollowTargetUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            source2sdk::animgraphlib::FollowTargetOpFixedSettings_t m_opFixedData; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterPosition; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterOrientation; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFollowTargetUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFollowTargetUpdateNode) == 0x_);
    };
};
