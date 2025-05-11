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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x90
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFollowTargetUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            source2sdk::animgraphlib::FollowTargetOpFixedSettings_t m_opFixedData; // 0x70            
            uint8_t _pad0080[0x8]; // 0x80
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterPosition; // 0x88            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameterOrientation; // 0x8a            
            uint8_t _pad008c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFollowTargetUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFollowTargetUpdateNode) == 0x90);
    };
};
